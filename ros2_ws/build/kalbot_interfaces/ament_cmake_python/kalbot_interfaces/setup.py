from setuptools import find_packages
from setuptools import setup

setup(
    name='kalbot_interfaces',
    version='0.0.0',
    packages=find_packages(
        include=('kalbot_interfaces', 'kalbot_interfaces.*')),
)
