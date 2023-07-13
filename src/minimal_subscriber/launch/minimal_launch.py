from launch import LaunchDescription
from launch_ros.actions import Node


def generate_launch_description():
    return LaunchDescription([
        Node(
            package='minimal_publisher',
            executable='minimal_publisher_node',
            name='publisher'
        ),
        Node(
            package='minimal_subscriber',
            executable='minimal_subscriber_node',
            name='subscriber'
        )
    ])
