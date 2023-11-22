from launch import LaunchDescription
from launch_ros.actions import Node

def generate_launch_description():
    ld = LaunchDescription()

    turtlesim_node = Node(
        package="turtlesim",
        executable="turtlesim_node",
        name="turtle_controller",
        parameters=[
            # {"number_to_publish": 50},
            # {"publish_frequency": 5.0}
            # {"robot_name_param": "giskard"}
        ]
    )

    turtle_controller = Node(
        package="my_py_pkg",
        executable="turtle_controller",
        name="turtle_controller",
        parameters=[
            # {"number_to_publish": 50},
            # {"publish_frequency": 5.0}
            # {"robot_name_param": "giskard"}
        ]
    )

    turtle_spawner = Node(
        package="my_py_pkg",
        executable="turtle_spawner",
        name="turtle_spawner",
        parameters=[
            # {"number_to_publish": 50},
            # {"publish_frequency": 5.0}
            # {"robot_name_param": "bb8"}
        ]
    )

    ld.add_action(turtlesim_node)
    ld.add_action(turtle_controller)
    ld.add_action(turtle_spawner)

    return ld
