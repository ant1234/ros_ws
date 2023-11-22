#!/usr/bin/env python3
import rclpy
from rclpy.node import Node
from example_interfaces.msg import String
    
    
class SmartphoneNode(Node): 
    def __init__(self):
        super().__init__("smartphone") 

        # create a subscriber which has a string type, is listening 
        # to the news station topic and runs the code in callback_robot_news, and has a queue size of 10 
        self.subscriber_ = self.create_subscription(String, "robot_news", self.callback_robot_news, 10)

        # make sure the node has started
        self.get_logger().info("smartphone node has started")

    # get the data being passed to the subscriber from the publisher through the news_station topic 
    def callback_robot_news(self, msg):
        self.get_logger().info(msg.data) 
    
    
def main(args=None):
    rclpy.init(args=args)
    node = SmartphoneNode()
    rclpy.spin(node)
    rclpy.shutdown()
    
    
if __name__ == "__main__":
    main()