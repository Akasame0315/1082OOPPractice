#include <iostream>
#include <iomanip>
#include <vector>
using namespace std;

int main()
{

    int day = 0;
    char answer;

    vector<vector<vector<int>>> dates(5, vector<vector<int>>(4, vector<int>(4)));
     
    //第一個陣列，所以為[0][i][j]去輸入
    int n = 1;//初值
    for (int i = 0; i < 4; i++) {
        for (int j = 0; j < 4; j++) {
            dates[0][i][j] = n;
            n += 2; //下個數字就加2
        }
    }

    n = 2;//初值
    for (int i = 0; i < 4; i++) {
        for (int j = 0; j < 4; j++) {
            dates[1][i][j] = n;
            
            //第一個數字+1, 第二個+3 ;總共四個數字以0為開頭，變成 0 1 0 1 == +1 +3 +1 +3
            if (j % 2 == 0) n++;
            else n += 3;
        }
    }

    n = 4; //初值
    for (int i = 0; i < 4; i++) {
        for (int j = 0; j < 4; j++) {
            dates[2][i][j] = n;
            n++;
        }
        n += 4; //換行後 總共+5 ， 上面+4 下面+1 == +5
    }

    n = 8; //初值
    for (int i = 0; i < 4; i++) {
        for (int j = 0; j < 4; j++) {
            dates[3][i][j] = n;
            n++;
        }
        if (i == 1) n += 8; //24-15 > 9   上面+1 下面+8 = +9
    }

    n = 16; //初值
    for (int i = 0; i < 4; i++) {
        for (int j = 0; j < 4; j++) {
            dates[4][i][j] = n;
            n++; // +1你不會??
        }
    }

    for (int i = 0; i < 5; i++)
    {
        cout << "Is your birthday in Set" << (i + 1) << "?" << endl;
        for (int j = 0; j < 4; j++)
        {
            for (int k = 0; k < 4; k++)
                cout << setw(3) << dates[i][j][k] << " ";
            cout << endl;
        }
        cout << "\nEnter N for No and Y for Yes: ";
        cin >> answer;
        if (answer == 'Y')
            day += dates[i][0][0];
    }

    cout << "Your birthday is " << day << endl;

    system("pause");
    return 0;
}