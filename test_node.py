import sys, os


def calculate_robot_speed(distance, time):
    if time == 0:
        return None
    speed = distance / time
    return speed


print(calculate_robot_speed(100, 5))
