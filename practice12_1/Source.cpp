#include <iostream>
using namespace std;
template <class T1, class T2>
void InsertionSort(T1 list[], T2 listSize)
{
    for (T2 i = 1; i < listSize; i++)
    {
        T1 currentElement = list[i];
        T2 k;
        for (k = i - 1; k >= 0 && list[k] > currentElement; k--)
        {
            list[k + 1] = list[k];
        }
        list[k + 1] = currentElement;
    }
}

template <class T3, class T4, class T5>
T3 BinarySearch(const T3 list[], T4 key, T5 listSize)
{
    T5 low = 0;
    T5 high = listSize - 1;

    while (high >= low)
    {
        T5 mid = (low + high) / 2;
        if (key < list[mid])
            high = mid - 1;
        else if (key == list[mid])
            return mid;
        else
            low = mid + 1;
    }

    return -1;
}

int main()
{
    int list1[9] = { 1,5,6,2,3,7,9,8,4 };
    double list2[9] = { 1.1,5.5,6.6,2.2,3.3,7.7,9.9,8.8,4.4 };
    double key = 0;
    cout << "From: ";
    for (int i = 0; i < 9; i++) {
        cout << list1[i];
        if (i < 8)
            cout << ",";
    }
    cout << endl;
    cout << "To: ";
    InsertionSort(list1, 9);
    for (int i = 0; i < 9; i++) {
        cout << list1[i];
        if (i < 8)
            cout << ",";
    }
    cout << endl;
    for (int i = 0; i < 3; i++) {
        cin >> key;
        cout << key << " at " << BinarySearch(list1, key, 9) << endl;
    }
    cout << endl;
    cout << "From: ";
    for (int i = 0; i < 9; i++) {
        cout << list2[i];
        if (i < 8)
            cout << ",";
    }
    cout << endl;

    cout << "To: ";
    InsertionSort(list2, 9);
    for (int i = 0; i < 9; i++) {
        cout << list2[i];
        if (i < 8)
            cout << ",";
    }
    cout << endl;
    for (int i = 0; i < 3; i++) {
        cin >> key;
        cout << key << " at " << BinarySearch(list2, key, 9) << endl;
    }
    cout << endl;
    system("pause");
    return 0;
}