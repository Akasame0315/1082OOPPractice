from Date import Date
from Student import Student

stu1 = Student("Jerry", 6, 1, 1999, 90)
stu2 = Student("Marry", 10, 8, 1997, 80)

n = str(input())
m = int(input())
d = int(input())
y = int(input())

stu1.setName(n)
stu2.setDate(m, d, y)

stu1.toString()
stu2.toString()