#!/usr/bin/env python3
import rclpy
from rclpy.node import Node
from my_robot_interfaces.srv import SetLed
from my_robot_interfaces.msg import LedStates
      
class LedPanelNode(Node):
    def __init__(self):

        super().__init__("led_panel")
        # get data from the battery client regarding the battery status.
        self.server_ = self.create_service(SetLed, "set_led", self.callback_led_panel)

        self.declare_parameter("led_state")

        self.led_state_ = self.get_parameter("led_state").value

        # publish of the led status
        self.publisher_ = self.create_publisher(LedStates, "led_panel_state", 10)


        self.get_logger().info("LED panel server is online.")
    
    def callback_led_panel(self, request, response):

        msg = LedStates()
        response.status = "Battery is full."

        if self.led_state_:
            response.status = "Battery is now charging."

        msg.led_number = request.led_number
        msg.led_state = self.led_state_
        self.publisher_.publish(msg)

        self.get_logger().info(str(request.led_number) + " + " + str(request.led_state) + " = " + str(response.status))
        return response
    
    
def main(args=None):
    rclpy.init(args=args)
    node = LedPanelNode()
    rclpy.spin(node)
    rclpy.shutdown()
    
    
if __name__ == "__main__":
    main()