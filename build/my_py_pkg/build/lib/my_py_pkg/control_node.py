#!/usr/bin/env python3
import rclpy
from rclpy.node import Node

from my_robot_interfaces.srv import CiberRatoServer



import socket

UDP_IP = "127.0.0.1"
UDP_PORT = 6000

NUM_IR_SENSORS = 4
NUM_LINE_ELEMENTS = 7


class CMeasures:

    def __init__ (self):
        self.compassReady=False
        self.compass=0.0; 

        self.irSensorReady=[False for i in range(NUM_IR_SENSORS)]
        self.irSensor=[0.0 for i in range(NUM_IR_SENSORS)]

        self.beaconReady = [] # False   # TODO consider more than one beacon
        self.beacon =      [] # (False, 0.0)

        self.time = 0

        self.groundReady = False
        self.ground = -1

        self.collisionReady = False
        self.collision = False 

        self.lineSensorReady = False
        self.lineSensor=["0" for i in range(NUM_LINE_ELEMENTS)]

        self.start = False 
        self.stop = False 

        self.endLed = False
        self.returningLed = False
        self.visitingLed = False

        self.x = 0.0   
        self.y = 0.0   
        self.dir = 0.0

        self.scoreReady = False
        self.score = 100000

        self.arrivalTimeReady = False
        self.arrivalTime = 10000
        
        self.returningTimeReady = False
        self.returningTime = 10000
        
        self.collisionsReady = False
        self.collisions = 0
        
        self.gpsReady = False
        self.gpsDirReady = False

        self.hearMessage=''



from xml import sax

class StructureHandler(sax.ContentHandler):

    def __init__ (self):
        self.status = 0
        self.measures = CMeasures()

    def startElement(self, name, attrs):
        if name == "Reply":
            if "Status" not in attrs.keys():
                self.status = -1
                return
                
            if attrs["Status"]=="Ok":
                self.status = 0
                return
            self.status = -1
        elif name == "Parameters":
            self.nBeacons = attrs["NBeacons"]
            self.simTime = attrs["SimTime"]
        elif name=="Measures":
            self.measures.time = int(attrs["Time"])
        elif name=="Sensors":
            self.measures.compassReady         = ("Compass" in attrs.keys())
            if self.measures.compassReady:
                self.measures.compass =   float(attrs["Compass"])

            self.measures.collisionReady         = ("Collision" in attrs.keys())
            if self.measures.collisionReady:
                self.measures.collision = (attrs["Collision"] == "Yes")

            self.measures.groundReady         = ("Ground" in attrs.keys())
            if self.measures.groundReady:
                self.measures.ground =    int(attrs["Ground"])

        elif name == "IRSensor":
            id = int(attrs["Id"])
            #print "IRSensor id ", id
            if id < NUM_IR_SENSORS: 
                self.measures.irSensorReady[id] = True
                #print "IRSensor val ", attrs["Value"]
                self.measures.irSensor[id] = float(attrs["Value"])
            else: 
                self.status = -1
        elif name == "BeaconSensor":
            id = int(attrs["Id"])
            
            if id==len(self.measures.beacon):  
                self.measures.beaconReady.append(True)
                if attrs["Value"] == "NotVisible":
                    
                    self.measures.beacon.append((False,0.0))
                else:
                    
                    self.measures.beacon.append( (True,float(attrs["Value"])) )
            else:
                self.status = -1
                print('BeaconSensor cannot be correctly parsed', id, len(self.measures.beacon))
                quit()
        elif name == "GPS":
            if "X" in attrs.keys():
                self.measures.gpsReady = True
                self.measures.x = float(attrs["X"])
                self.measures.y = float(attrs["Y"])
                if "Dir" in attrs.keys():
                     self.measures.gpsDirReady = True
                     self.measures.dir = float(attrs["Dir"])
                else:
                     self.measures.gpsDirReady = False
            else:
                self.measures.gpsReady = False
        elif name == "LineSensor":
            self.measures.lineSensorReady = True
            self.measures.lineSensor = list(attrs["Value"])
        elif name == "Leds":
            self.measures.endLed = (attrs["EndLed"] == "On")
            self.measures.returningLed = (attrs["ReturningLed"] == "On")
            self.measures.visitingLed = (attrs["VisitingLed"] == "On")
        elif name == "Buttons":
            self.measures.start = (attrs["Start"] == "On")
            self.measures.stop = (attrs["Stop"] == "On")
        elif name == "Score":
            self.measures.scoreReady         = ("Score" in attrs.keys())
            if self.measures.scoreReady:
                 self.measures.score=int(attrs["Score"])
            self.measures.arrivalTimeReady         = ("ArrivalTime" in attrs.keys())
            if self.measures.arrivalTimeReady:
                 self.measures.arrivalTime=int(attrs["ArrivalTime"])
            self.measures.returningTimeReady         = ("ReturningTime" in attrs.keys())
            if self.measures.returningTimeReady:
                 self.measures.returningTime=int(attrs["ReturningTime"])
            self.measures.collisionsReady         = ("Collisions" in attrs.keys())
            if self.measures.collisionsReady:
                 self.measures.collisions=int(attrs["Collisions"])
        elif name == "Message":
            self.hearFrom = int(attrs["From"])


    
rob_name = "robot"
host = "localhost"
robId = "robId"
angs = [0.0,60.0,-60.0,180.0]



class ControlNode(Node):
    
    def __init__(self):
        super().__init__("control_node")
        
        
        self.declare_parameter("rob_name","robot")
        self.declare_parameter("robId",1)
        self.declare_parameter("angs",[0.0,60.0,-60.0,180.0])
       

        rob_name = self.get_parameter("rob_name").value
        robId = self.get_parameter("robId").value
        angs = self.get_parameter("angs").value
        

        self.host = host
        self.server_ = self.create_service(
            CiberRatoServer, "Ciber_Rato_Server", self.callback_Ciber_Rato_Server) 
        self.get_logger().info("control_node server has been started.")
        
        
        

        self.sock = socket.socket(socket.AF_INET, # Internet
                             socket.SOCK_DGRAM) # UDP
        
        self.sock.settimeout(2.0)

        msg = '<Robot Id="'+str(robId)+'" Name="'+rob_name+'">'
        for ir in range(NUM_IR_SENSORS):
            msg+='<IRSensor Id="'+str(ir)+'" Angle="'+str(angs[ir])+'" />'
        msg+='</Robot>'

        
        self.sock.sendto(msg.encode(), (self.host, UDP_PORT))  # TODO 
        data, (self.host,self.port) = self.sock.recvfrom(1024)
        

        parser = sax.make_parser()
        
        
        handler = StructureHandler()
        parser.setContentHandler( handler )
        
        d2 = data[:-1]

        sax.parseString( d2, handler )

        self.status = handler.status
        if self.status==0:
            self.nBeacons = handler.nBeacons
            self.simTime  = handler.simTime
            
            
        
        
        

    def readSensors(self):
        try:
            data, (host,port) = self.sock.recvfrom(4096)
        except socket.timeout:
            exit(1)
        d2 = data[:-1]

        
        parser = sax.make_parser()
        
        handler = StructureHandler()
        parser.setContentHandler( handler )


        sax.parseString( d2, handler )

        self.status    = handler.status
        self.measures  = handler.measures
        
        
        
    def driveMotors(self, lPow, rPow):
        msg = '<Actions LeftMotor="'+str(lPow)+'" RightMotor="'+str(rPow)+'"/>'
        self.sock.sendto(msg.encode(),(self.host,self.port))

    def setReturningLed(self,val):
        msg = '<Actions LeftMotor="0.0" RightMotor="0.0" ReturningLed="'+ ("On" if val else "Off") +'"/>'
        self.sock.sendto(msg.encode(),(self.host,self.port))

    def setVisitingLed(self,val):
        msg = '<Actions LeftMotor="0.0" RightMotor="0.0" VisitingLed="'+ ("On" if val else "Off") +'"/>'
        self.sock.sendto(msg.encode(),(self.host,self.port))

    def finish(self):
        msg = '<Actions LeftMotor="0.0" RightMotor="0.0" EndLed="On"/>'
        self.sock.sendto(msg.encode(),(self.host,self.port))
            
        
    def callback_Ciber_Rato_Server(self, request, response): 
        
        if not request.initial_state:
            
            if request.set_visiting_led != "":
                self.setVisitingLed(bool(request.set_visiting_led))
            
            if request.set_returning_led != "":
                self.setReturningLed(bool(request.set_returning_led))
                
            self.driveMotors(request.lpow, request.rpow)
        
        self.readSensors()
        
        response.start_rob = self.measures.start
        response.stop_rob  = self.measures.stop
        
        response.visiting_led = self.measures.visitingLed
        response.returning_led = self.measures.returningLed
        
        response.ground = self.measures.ground
        
        response.center_id  = self.measures.irSensor[0]
        response.left_id  = self.measures.irSensor[1]
        response.right_id  = self.measures.irSensor[2]
        response.back_id  = self.measures.irSensor[3]
        
        response.state = request.state
        response.stopped_state = request.stopped_state
        
        self.get_logger().info(f"Server response sent {response}")
        return response

           

def main(args=None):
    rclpy.init(args=args)
    node = ControlNode()
    rclpy.spin(node)
    rclpy.shutdown()


if __name__ == "main":
    main()