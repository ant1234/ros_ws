from setuptools import find_packages
from setuptools import setup

setup(
    name='my_new_robot_interfaces',
    version='0.0.0',
    packages=find_packages(
        include=('my_new_robot_interfaces', 'my_new_robot_interfaces.*')),
)
