#include <iostream>
#include <vector>
#include <iomanip>
using namespace std;

//每人3科平均
double stuAve(vector<vector<double>> score, int i) {
	double sum = 0;
	
	//把第i個學生的分數加總
	for (int j = 0; j < 3; j++) {
		sum += score[i][j];
		
	}
	
	//i學生的3科平均
	return sum / 3;
}

//全班3科平均
double* courseAve(vector<vector<double>> score, int i) {
	double sum = 0;
	
	//建立一個空的aver
	double* aver = new double(); 

	for (int j = 0; j < 5; j++) {
		sum = sum + score[j][i];
	}
	*aver = sum / 5.0;
	return aver;
}

int main() {
	vector<vector<double>> score = {
		{80.0, 70.0, 90.0},
		{85.0, 77.0, 95.0},
		{83.0, 75.0, 70.0},
		{73.0, 95.0, 67.0},
		{88.0, 79.0, 71.0}
	};
	
	//輸出第0列的score
	for (int i = 0; i < 3; i++) { 
		cout << setprecision(1) << fixed << score[0][i] << ",";
	}
	cout << setprecision(1) << fixed << stuAve(score, 0) << endl;
	
	//輸出第1列的score
	for (int i = 0; i < 3; i++) {
		cout << setprecision(1) << fixed << score[1][i] << ",";
	}
	cout << setprecision(1) << fixed << stuAve(score, 1) << endl;
	
	//輸出第2列的score
	for (int i = 0; i < 3; i++) {
		cout << setprecision(1) << fixed << score[2][i] << ",";
	}
	cout << setprecision(1) << fixed << stuAve(score, 2) << endl;
	
	//輸出第3列的score
	for (int i = 0; i < 3; i++) {
		cout << setprecision(1) << fixed << score[3][i] << ",";
	}
	cout << setprecision(1) << fixed << stuAve(score, 3) << endl;
	
	//輸出第4列的score
	for (int i = 0; i < 3; i++) { 
		cout << setprecision(1) << fixed << score[4][i] << ",";
	}
	cout << setprecision(1) << fixed << stuAve(score, 4) << endl;

	//輸出全班的3科平均
	cout << "Average:" << setprecision(1) << fixed << *courseAve(score, 0) << ", " << *courseAve(score, 1) << ", " << *courseAve(score, 2) << endl;

	system("pause");
	return 0;

		
}