#!/usr/bin/env python3
import rclpy
from rclpy.node import Node

class myNode(Node):

    def __init__(self):
        super().__init__("py_test")
        self.counter_ = 0
        self.get_logger().info("Hello ROS2")
        self.create_timer(0.5, self.timer_callback)

    def timer_callback(self):
        self.counter_ += 1
        self.get_logger().info("Hello " + str(self.counter_))

def main(args=None):

    # start ros communication.
    rclpy.init(args=args)

    #  instantiate node.
    node = myNode()

    # creates a loop to keep the project alive.
    rclpy.spin(node)

    # end communication.
    rclpy.shutdown()

if __name__ == "__main__":
    main()