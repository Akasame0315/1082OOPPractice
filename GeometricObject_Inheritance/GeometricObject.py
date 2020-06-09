class  GeometricObject:
    def __init__(self, color, filled):
        self.__color = color
        self.__filled = filled

    def getColor(self):
        return self.__color

    def setColor(self, color):
        self.__color = color

    def isFilled(self):
        return self.__filled

    def setFilled(self, filled):
        self.__filled = filled

    def __str__(self):
        print("color: %s and filled: %s"%(self.getColor(), self.isFilled()))
        #return "color: " + self.__color + " and filled: True"