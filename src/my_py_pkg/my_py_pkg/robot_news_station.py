#!/usr/bin/env python3
import rclpy
from rclpy.node import Node
from example_interfaces.msg import String
    
class RobotNewsStation(Node): 
    def __init__(self):

        super().__init__("robot_news_station") 

  
        self.declare_parameter("robot_name_param", "default_robot_name")
        self.robot_name_ = self.get_parameter("robot_name_param").value

        # create a publisher with string msg type, the topic called robot_news 
        # and with a duration of 10 seconds before timing out.
        self.publisher_ = self.create_publisher(String, "robot_news", 10)

        # create a timer to publish onto the topic as well and give it a callback
        self.timer_ = self.create_timer(0.5, self.publish_news)

        # put in a logger to make sure the node is working
        self.get_logger().info("Robot news station has been started.")

    # publish the message ie. Hello onto the publisher created above 
    def publish_news(self):
        msg = String()
        msg.data = "Hi this is " + self.robot_name_ + " from the robot news station"
        self.publisher_.publish(msg)
     
def main(args=None):
    rclpy.init(args=args)
    node = RobotNewsStation()
    rclpy.spin(node)
    rclpy.shutdown()
    
    
if __name__ == "__main__":
    main()