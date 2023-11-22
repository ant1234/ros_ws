#!/usr/bin/env python3
import rclpy
from rclpy.node import Node
from my_robot_interfaces.srv import SetLed
from functools import partial
    
class BatteryClientNode(Node): 
    def __init__(self):
        super().__init__("battery_client")         

        self.battery_state_ = "full"
        self.last_time_battery_state_changed_ = self.get_current_time_seconds()
        self.battery_timer_ = self.create_timer(0.1, self.check_battery_state)
        self.get_logger().info("Battery node has been started")

    def get_current_time_seconds(self):
        secs, nsecs = self.get_clock().now().seconds_nanoseconds()
        return secs + nsecs / 1000000000.0

    def check_battery_state(self):
        time_now = self.get_current_time_seconds()
        if self.battery_state_ == "full":
            if time_now - self.last_time_battery_state_changed_ > 4.0:
                self.battery_state_ = "empty"
                self.get_logger().info("Battery is empty! Charging battery...")
                self.last_time_battery_state_changed_ = time_now
                self.call_set_led(3, True)
        else:
            if time_now - self.last_time_battery_state_changed_ > 6.0:
                self.battery_state_ = "full"
                self.get_logger().info("Battery is now full again.")
                self.last_time_battery_state_changed_ = time_now
                self.call_set_led(3, False)


    # Set up a async call to the LED server.
    def call_set_led(self, led_number, led_state):

        client = self.create_client(SetLed, "set_led")
        self.get_logger().info("Set LED client is online.")

        while not client.wait_for_service(1.0):
            self.get_logger().warn("Waiting for LED server panel.")

        request = SetLed.Request()
        request.led_number = led_number
        request.led_state = led_state

        future = client.call_async(request)
        future.add_done_callback(partial(self.callback_call_set_led, a=led_number, b=led_state))

    # Send message to server and expect a response.
    def callback_call_set_led(self, future, a, b):
        try: 
            response = future.result()
        except Exception as e:
            self.get_logger().error("Server call failed %r" % (e, ))

    
def main(args=None):
    rclpy.init(args=args)
    node = BatteryClientNode() 
    rclpy.spin(node)
    rclpy.shutdown()
    
    
if __name__ == "__main__":
    main()