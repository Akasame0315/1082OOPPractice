def isLeapYear(newYear):
    if (newYear % 4 == 0 and newYear % 100 != 0) or newYear % 400 == 0:
        return True
    else:
        return False
        
for i in range(3):
    year = int(input())
    
    if isLeapYear(year) == True:
        print("The", str(year), "is leap year.")
    else:
        print("The", str(year), "isn't leap year.")
