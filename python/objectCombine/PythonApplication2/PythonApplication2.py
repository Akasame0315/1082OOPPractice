from Teacher import Teacher
from Body import Body

s = input()
height = float(input())
weight = float(input())

teacher1 = Teacher("Candy", Body(1.7, 80), 88000)
teacher2 = Teacher("Linda", Body(1.6, 90), 61000)

teacher1.setName(s)
teacher2.setBody(height, weight)

teacher1.toString()
teacher2.toString()

