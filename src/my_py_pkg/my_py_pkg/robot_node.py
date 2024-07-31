#!/usr/bin/env python3
import rclpy
from rclpy.node import Node
from functools import partial

from my_robot_interfaces.srv import CiberRatoServer

import sys

from math import *
import xml.etree.ElementTree as ET

CELLROWS=7
CELLCOLS=14


class RobotNode(Node):
    
    def __init__(self):
        super().__init__("robot_node")
        
        state = 'stop'
        stopped_state = 'run'
        
        self.call_Ciber_Rato_Server(state, stopped_state, "", "", 0.0, 0.0, True) # REQUEST 
        
        
    def call_Ciber_Rato_Server(self, state, stopped_state, set_visiting_led, set_returning_led, lpow, rpow, initial_state): #c
        
        client = self.create_client(CiberRatoServer, "Ciber_Rato_Server")
        while not client.wait_for_service(1.0):
            self.get_logger().warn("Waiting for Server control_node...")

        

        request = CiberRatoServer.Request()
        
        request.state = state
        request.stopped_state = stopped_state
        
        request.set_visiting_led = set_visiting_led
        request.set_returning_led = set_returning_led
        
        request.lpow = lpow
        request.rpow = rpow
        request.initial_state = initial_state

        future = client.call_async(request) #calling server
        future.add_done_callback(
            partial(self.callback_call_Ciber_Rato_Server)) 
        
    def callback_call_Ciber_Rato_Server(self, future): 
        try:
            response = future.result()
            
            state = response.state
            stopped_state = response.stopped_state
            
            self.center_id = response.center_id
            self.left_id = response.left_id
            self.right_id = response.right_id
            self.back_id = response.back_id
            
            set_visiting_led = ""
            set_returning_led = ""
            
            lpow = 0.0
            rpow = 0.0
            
            if state == 'stop' and response.start_rob:
                state = stopped_state

            if state != 'stop' and response.stop_rob:
                stopped_state = state
                state = 'stop'
                
            if state == 'run':
                if response.visiting_led==True:
                    state='wait'
                if response.ground==0:
                    set_visiting_led= "True"
                lpow, rpow = self.wander()
            elif state=='wait':
                set_returning_led = "True"
                if response.visiting_led==True:
                    set_visiting_led = "False"
                if response.returningLed==True:
                    state='return'
            elif state=='return':
                if response.visiting_led==True:
                    set_visiting_led = "False"
                if response.returningLed==True:
                    set_returning_led = "False"
                lpow, rpow = self.wander()
                
            self.call_Ciber_Rato_Server(state, stopped_state, set_visiting_led, 
                                          set_returning_led, lpow, rpow, False) #request
            self.get_logger().info("request send to server")  

        except Exception as e:
            self.get_logger().error("Service call failed %r" % (e,))
                        

    def wander(self):

        if    self.center_id > 5.0\
           or self.left_id   > 5.0\
           or self.right_id  > 5.0\
           or self.back_id   > 5.0:
            # self.driveMotors(-0.1, +0.1)
            return -0.1, +0.1
        elif self.left_id > 2.7:
            # self.driveMotors(0.1,0.0)
            return 0.1, 0.0
        elif self.right_id > 2.7:
            # self.driveMotors(0.0, 0.1)
            return 0.0, 0.1
        else:
            # self.driveMotors(0.1, 0.1)
            return 0.1, 0.1


def main(args=None):
    rclpy.init(args=args)
    node = RobotNode()
    rclpy.spin(node)
    rclpy.shutdown()


if __name__ == "main":
    main()