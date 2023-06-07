#! usr/bin/env python3

import rclpy
from rclpy.node import Node

class MotorController(Node):

    def __init__(self):
        super().__init__("motor_controller")
        self._counter = 0
        self.create_timer(1.0, self.timer_callback)
    def timer_callback(self):
        self.get_logger().info("In get logger info " + str(self._counter))
        self._counter += 1

def main(args=None):
    rclpy.init(args=args)
    node = MotorController()
    rclpy.spin(node)
    rclpy.shutdown()