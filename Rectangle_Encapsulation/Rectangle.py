class Rectangle:
	def __init__(self, length, width):
		self.__length = length
		self.__width = width

	def getLength(self):
		return self.__length
	def setLength(self, length):
		self.__length = length

	def getWidth(self):
		return self.__width
	def setWidth(self, width):
		self.__width = width

	def getArea(self):
		return self.getLength() * self.getWidth()

	def getPerimeter(self):
		return 2 * (self.getLength() + self.getWidth())

	




