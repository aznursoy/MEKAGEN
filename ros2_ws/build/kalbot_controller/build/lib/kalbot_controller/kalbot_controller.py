#! usr/bin/env python3

import rclpy
from rclpy.node import Node
from kalbot_interfaces.msg import MotorCommand
from kalbot_interfaces.srv import SetMotorSpeed
from functools import partial

class KalbotController(Node):

    def __init__(self):
        super().__init__("kalbot_controller")
        self._publisher = self.create_publisher(
            MotorCommand, "/motor_commands", 10)
        self._keyboard_subscriber = self.create_subscription(
            MotorCommand, "/keyboard_commands", self.keyboard_command, 10)
        self._timer = self.create_timer(0.1, self.publish_commands)
        self._command = MotorCommand()
        self._command.left_motor_speed = 0
        self._command.right_motor_speed = 0

    def publish_commands(self):
        self._publisher.publish(self._command)

    def keyboard_command(self, command: MotorCommand):
        self._command.left_motor_speed, self._command.right_motor_speed = \
            command.left_motor_speed, command.right_motor_speed
        
    """
    def change_speed_command(self, left_speed, right_speed):
        client = self.create_client(MotorCommand, "/keyboard_commands")
        
        while not client.wait_for_service(1.0):
            self.get_logger().warn("Waiting for service...")
        request = SetMotorSpeed.Request()
        request.left_speed = left_speed
        request.right_speed = right_speed

        future = client.call_async(request)
        future.add_done_callback(partial(self.callback_set_speed))
        


    def callback_set_speed(self, future):
        try:
            response = future.result()
        except Exception as e:
            self.get_logger().error("Service call failed: %r" % (e,))
    """
def main(args=None):
    rclpy.init(args=args)
    node = KalbotController()
    rclpy.spin(node)
    node.destroy_node()
    rclpy.shutdown()