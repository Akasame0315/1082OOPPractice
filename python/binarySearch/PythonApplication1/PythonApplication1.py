def binarySearch(key, lst, size):
    low = 0
    high = size - 1

    while high >= low:
        mid = (low + high) // 2;
        if key < lst[mid]:
            high = mid - 1
        elif key == lst[mid]:
            return mid
        else:
            low = mid + 1
    return - 1


list1 = [1, 3, 5, 7, 9, 11, 13, 15, 17]
list2 = [1.1, 3.3, 5.5, 7.7, 9.9, 11.1, 13.3, 15.5, 17.7]

print("list1:", list1)
for i in range(3):
    key1 = int(input())
    print(key1, "at", binarySearch(key1, list1, 9))

print("list2:", list2)
for i in range(3):
    key2 = float(input())
    print(key2, "at", binarySearch(key2, list2, 9))