#! usr/bin/env pyhton3

import rclpy
from rclpy.node import Node
from kalbot_interfaces.msg import MotorCommand
from pynput import keyboard

class KeyboardController(Node):

    def __init__(self):
        super().__init__("keyboard_controller")
        self._publisher = self.create_publisher(MotorCommand,"/keyboard_commands", 10)
        self._listener = keyboard.Listener(
            on_press=self.on_key_press, on_release=self.on_key_release)
        self._listener.start()
        self._command = MotorCommand()

    def on_key_press(self, key):
        if key == keyboard.Key.up:
            self._command.left_motor_speed = 100
            self._command.right_motor_speed = 100
        elif key == keyboard.Key.down:
            self._command.left_motor_speed = -100
            self._command.right_motor_speed = -100
        elif key == keyboard.Key.left:
            self._command.left_motor_speed = -50
            self._command.right_motor_speed = 50
        elif key == keyboard.Key.right:
            self._command.left_motor_speed = 50
            self._command.right_motor_speed = -50
        self._publisher.publish(self._command)

    def on_key_release(self, key):
        if key == keyboard.Key.up or key == keyboard.Key.down or key == keyboard.Key.left or key == keyboard.Key.right:
            self._command.left_motor_speed = 0
            self._command.right_motor_speed = 0
            self._publisher.publish(self._command)

def main(args=None):
    rclpy.init(args=args)
    node = KeyboardController()
    rclpy.spin(node)
    node.destroy_node()
    rclpy.shutdown()