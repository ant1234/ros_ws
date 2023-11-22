# The number_counter node subscribes to the “/number” topic. It keeps a counter variable. 
# Every time a new number is received, it’s added to the counter. The node also has a 
# publisher on the “/number_count” topic. When the counter is updated, the publisher directly publishes the new value on the topic.

# A few hints:
# Check what to put into the example_interfaces/msg/Int64 with the “ros2 interface show” command line tool.
# It may be easier to do the activity in this order: first create the number_publisher node, 
# check that the publisher is working with “ros2 topic”. Then create the number_counter, focus on the subscriber. And finally create the last publisher.
# In the number_counter node, the publisher will publish messages directly from the subscriber callback.

#!/usr/bin/env python3
import rclpy
from rclpy.node import Node
from example_interfaces.msg import Int64
    
    
class NumberPublisherNode(Node): 
    def __init__(self):
        super().__init__("number_publisher") 

        self.declare_parameter("number_to_publish", 2)
        self.declare_parameter("publish_frequency", 1.0)

        # publish to the topic called number.
        self.publisher_ = self.create_publisher(Int64, "number_publisher", 10)

        # create timer period.
        self.number_ = self.get_parameter("number_to_publish").value
        self.frequency_ = self.get_parameter("publish_frequency").value

        self.timer_ = self.create_timer(1.0 / self.frequency_, self.publish_number)

        self.get_logger().info("The Number publisher is operational.")

    def publish_number(self):
        msg = Int64()
        msg.data = self.number_
        self.publisher_.publish(msg)
    
def main(args=None):
    rclpy.init(args=args)
    node = NumberPublisherNode()
    rclpy.spin(node)
    rclpy.shutdown()
    
    
if __name__ == "__main__":
    main()
