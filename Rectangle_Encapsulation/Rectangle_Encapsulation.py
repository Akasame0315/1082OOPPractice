from Rectangle import Rectangle

l1 = int(input())
l2 = int(input())
w1 = int(input())
w2 = int(input())

rect1 = Rectangle(l1, w1)
rect2 = Rectangle(l2, w2)

print(rect1.getArea(), rect1.getPerimeter())
print(rect2.getArea(), rect2.getPerimeter())

rect2.setLength(50)
rect2.setWidth(25)

print(rect2.getArea(), rect2.getPerimeter())