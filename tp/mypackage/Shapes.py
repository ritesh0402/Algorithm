from abc import ABC, abstractmethod
import math


class shape(ABC):
    def volume(self):
        pass


class sphere(shape):
    def __init__(self, radius):
        self.radius = radius

    def volume(self):
        self.vol = (4/3)*math.pi*(self.radius**3)
        return self.vol


class cube(shape):
    def __init__(self, side):
        self.side = side

    def volume(self):
        self.vol = self.side**3
        return self.vol


class cylinder(shape):
    def __init__(self, radius, height):
        self.radius = radius
        self.height = height

    def volume(self):
        self.vol = math.pi*(self.radius**2)*self.height
        return self.vol
