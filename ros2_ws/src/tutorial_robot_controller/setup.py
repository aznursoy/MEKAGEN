from setuptools import setup

package_name = 'tutorial_robot_controller'

setup(
    name=package_name,
    version='0.0.0',
    packages=[package_name],
    data_files=[
        ('share/ament_index/resource_index/packages',
            ['resource/' + package_name]),
        ('share/' + package_name, ['package.xml']),
    ],
    install_requires=['setuptools'],
    zip_safe=True,
    maintainer='zubeyir48',
    maintainer_email='zubeyir48@todo.todo',
    description='TODO: Package description',
    license='TODO: License declaration',
    tests_require=['pytest'],
    entry_points={
        'console_scripts': [
            "test_node = tutorial_robot_controller.first_node:main",
            "draw_circle = tutorial_robot_controller.draw_circle:main",
            "pose_subscriber = tutorial_robot_controller.pose_subscriber:main",
            "turtle_controller = tutorial_robot_controller.turtle_controller:main"
        ],
    },
)
