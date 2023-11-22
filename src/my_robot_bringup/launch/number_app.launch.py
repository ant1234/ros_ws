from launch import LaunchDescription
from launch_ros.actions import Node

def generate_launch_description():
    ld = LaunchDescription()

    remap_number_count_topic = ("number_count", "my_number")
    remap_number__publisher_topic = ("number_publisher", "my_number_publisher")

    # remap the node with "name" and remap the topic with parameters
    robot_news_station_giskard = Node(
        package="my_py_pkg",
        executable="robot_news_station",
        name="robot_news_station_giskard",
        remappings=[
            # remap_number_count_topic,
            # remap_number__publisher_topic
        ],
        parameters=[
            # {"number_to_publish": 50},
            # {"publish_frequency": 5.0}
            {"robot_name_param": "giskard"}
        ]
    )

    robot_news_station_bb8 = Node(
        package="my_py_pkg",
        executable="robot_news_station",
        name="robot_news_station_bb8",
        # remappings=[
        #     remap_number_count_topic,
        #     remap_number__publisher_topic
        # ],
        parameters=[
            # {"number_to_publish": 50},
            # {"publish_frequency": 5.0}
            {"robot_name_param": "bb8"}
        ]
    )

    robot_news_station_daneel = Node(
        package="my_py_pkg",
        executable="robot_news_station",
        name="robot_news_station_daneel",
        # remappings=[
        #     remap_number_count_topic,
        #     remap_number__publisher_topic
        # ],
        parameters=[
            # {"number_to_publish": 50},
            # {"publish_frequency": 5.0}
            {"robot_name_param": "daneel"}
        ]
    )

    robot_news_station_jander = Node(
        package="my_py_pkg",
        executable="robot_news_station",
        name="robot_news_station_jander",
        # remappings=[
        #     remap_number_count_topic,
        #     remap_number__publisher_topic
        # ],
        parameters=[
            # {"number_to_publish": 50},
            # {"publish_frequency": 5.0}
            {"robot_name_param": "jander"}
        ]
    )

    robot_news_station_c3po = Node(
        package="my_py_pkg",
        executable="robot_news_station",
        name="robot_news_station_c3po",
        # remappings=[
        #     remap_number_count_topic,
        #     remap_number__publisher_topic
        # ],
        parameters=[
            # {"number_to_publish": 50},
            # {"publish_frequency": 5.0}
            {"robot_name_param": "c3po"}
        ]
    )

    number_count_node = Node(
        package="my_py_pkg",
        executable="smartphone",
        name="smartphone"
        # remappings=[
        #     remap_number_count_topic,
        #     remap_number__publisher_topic
        # ]
    )

    ld.add_action(robot_news_station_giskard)
    ld.add_action(robot_news_station_bb8)
    ld.add_action(robot_news_station_daneel)
    ld.add_action(robot_news_station_jander)
    ld.add_action(robot_news_station_c3po)
    ld.add_action(number_count_node)

    return ld
