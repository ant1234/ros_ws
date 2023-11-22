#!/usr/bin/env python3
import rclpy
from rclpy.node import Node
from example_interfaces.msg import Int64
from example_interfaces.srv import SetBool
    
class NumberCountNode(Node): 
    def __init__(self):
        super().__init__("number_count") 

        self.counter_ = 0

        # create a publisher to send the number and the counter to the number count topic
        self.publisher_ = self.create_publisher(Int64, "number_count", 10)

        # publish to the topic called number.
        self.subscriber_ = self.create_subscription(Int64, "number_publisher", self.callback_number_count, 10)

        #  make sure things are working
        self.get_logger().info("The Number Count Subscription is operational.")

        self.server_ = self.create_service(SetBool, "reset_counter", self.callback_reset_count)
    
    def callback_reset_count(self, request, response):
        if request.data:
            self.get_logger().info("Request data has been set to true.")
            self.counter_ = 0
            return response

    def callback_number_count(self, msg):

        # increment the counter whenever the subscriber recieves a message.
        self.counter_ = self.counter_ + 1  

        msg = Int64()
        msg.data = 2023 + self.counter_
        self.publisher_.publish(msg)
    
def main(args=None):
    rclpy.init(args=args)
    node = NumberCountNode()
    rclpy.spin(node)
    rclpy.shutdown()
    
    
if __name__ == "__main__":
    main()
