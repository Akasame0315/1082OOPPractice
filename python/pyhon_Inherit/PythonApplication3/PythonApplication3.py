from Sphere import Sphere
from Cuboid import Cuboid

radius = int(input())
scolor = str(input())
l = float(input())
w = float(input())
h = float(input())
ccolor = str(input())

sphere = Sphere(radius)
sphere.setColor(scolor)

cuboid = Cuboid(l, w, h)
cuboid.setColor(ccolor)

print("{}({}),{},{}".format(sphere.__str__(), sphere.getRadius(), round(sphere.getVolume(), 1), sphere.getColor()))
print("{}({},{},{}),{},{}".format(cuboid.__str__(), int(cuboid.getLength()),int(cuboid.getWidth()),int(cuboid.getHeight()),round(cuboid.getVolume(), 1), cuboid.getColor()))
