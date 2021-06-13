#include <iostream>
#include <iomanip>
#include <vector>
using namespace std;

int main()
{

    int day = 0;
    char answer;

    vector<vector<vector<int>>> dates(5, vector<vector<int>>(4, vector<int>(4)));
     
    //�Ĥ@�Ӱ}�C�A�ҥH��[0][i][j]�h��J
    int n = 1;//���
    for (int i = 0; i < 4; i++) {
        for (int j = 0; j < 4; j++) {
            dates[0][i][j] = n;
            n += 2; //�U�ӼƦr�N�[2
        }
    }

    n = 2;//���
    for (int i = 0; i < 4; i++) {
        for (int j = 0; j < 4; j++) {
            dates[1][i][j] = n;
            
            //�Ĥ@�ӼƦr+1, �ĤG��+3 ;�`�@�|�ӼƦr�H0���}�Y�A�ܦ� 0 1 0 1 == +1 +3 +1 +3
            if (j % 2 == 0) n++;
            else n += 3;
        }
    }

    n = 4; //���
    for (int i = 0; i < 4; i++) {
        for (int j = 0; j < 4; j++) {
            dates[2][i][j] = n;
            n++;
        }
        n += 4; //����� �`�@+5 �A �W��+4 �U��+1 == +5
    }

    n = 8; //���
    for (int i = 0; i < 4; i++) {
        for (int j = 0; j < 4; j++) {
            dates[3][i][j] = n;
            n++;
        }
        if (i == 1) n += 8; //24-15 > 9   �W��+1 �U��+8 = +9
    }

    n = 16; //���
    for (int i = 0; i < 4; i++) {
        for (int j = 0; j < 4; j++) {
            dates[4][i][j] = n;
            n++; // +1�A���|??
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