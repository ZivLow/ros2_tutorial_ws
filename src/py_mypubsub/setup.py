from setuptools import find_packages, setup

package_name = 'py_mypubsub'

setup(
    name=package_name,
    version='0.0.0',
    packages=find_packages(exclude=['test']),
    data_files=[
        ('share/ament_index/resource_index/packages',
            ['resource/' + package_name]),
        ('share/' + package_name, ['package.xml']),
    ],
    install_requires=['setuptools'],
    zip_safe=True,
    maintainer='ziv',
    maintainer_email='zivlowenhao@gmail.com',
    description='My pubsub',
    license='Apache-2.0',
    tests_require=['pytest'],
    entry_points={
        'console_scripts': [
            'talker = py_mypubsub.publisher_member_function:main',
            'listener = py_mypubsub.subscriber_member_function:main',
        ],
    },
)
