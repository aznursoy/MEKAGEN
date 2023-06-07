from launch import LaunchDescription
from launch_ros.actions import Node

def generate_launch_description():
    ld = LaunchDescription()

    talker_node = Node(
        package="demo_nodes_cpp",
        executable = "talker",
        name = "kalbot_talker",
        remappings= [
            ("chatter", "kalbot_chatter")
        ],
        parameters= [
            {"param_name": "value"},
            {"param2_name": "value2"}
        ]
    )

    listener_node = Node(
        package="demo_nodes_cpp",
        executable = "listener",
        name = "kalbot_listener",
        remappings= [
            ("chatter", "kalbot_chatter")
        ]
    )

    ld.add_action(talker_node)
    ld.add_action(listener_node)

    return ld

