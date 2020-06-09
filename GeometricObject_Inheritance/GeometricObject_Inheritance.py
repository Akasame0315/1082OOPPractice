from Rectangle import Rectangle
from Circle import Circle

radius = int(input())
w = int(input())
h = int(input())
circleColor = str(input())
circleFilled = bool(input())
rectColor = str(input())
rectFilled = bool(input())

circle = Circle(radius, circleColor, circleFilled)
rect = Rectangle(w, h, rectColor, rectFilled)

print("Circle:")
print("Radius is {}\nDiameter is {}\nArea is {}\nPerimeter is {}".format(circle.getRadius(), circle.getDiameter(), circle.getArea(), circle.getPerimeter()))
circle.__str__()

print("Rectangle:")
print("Width is {}\nHeight is {}\nArea is {}\nPerimeter is {}".format(rect.getWidth(), rect.getHeight(), rect.getArea(), rect.getPerimeter()))
rect.__str__()