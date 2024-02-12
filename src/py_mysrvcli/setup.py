from setuptools import find_packages, setup

package_name = 'py_mysrvcli'

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
    description='My service client',
    license='Apache-2.0',
    tests_require=['pytest'],
    entry_points={
        'console_scripts': [
        'service = py_mysrvcli.add_three_ints_service:main',
        'client = py_mysrvcli.add_three_ints_client:main',
        ],
    },
)
