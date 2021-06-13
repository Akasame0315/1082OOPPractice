#include <iostream>
#include <vector>
#include <iomanip>
using namespace std;

//�C�H3�쥭��
double stuAve(vector<vector<double>> score, int i) {
	double sum = 0;
	
	//���i�Ӿǥͪ����ƥ[�`
	for (int j = 0; j < 3; j++) {
		sum += score[i][j];
		
	}
	
	//i�ǥͪ�3�쥭��
	return sum / 3;
}

//���Z3�쥭��
double* courseAve(vector<vector<double>> score, int i) {
	double sum = 0;
	
	//�إߤ@�ӪŪ�aver
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
	
	//��X��0�C��score
	for (int i = 0; i < 3; i++) { 
		cout << setprecision(1) << fixed << score[0][i] << ",";
	}
	cout << setprecision(1) << fixed << stuAve(score, 0) << endl;
	
	//��X��1�C��score
	for (int i = 0; i < 3; i++) {
		cout << setprecision(1) << fixed << score[1][i] << ",";
	}
	cout << setprecision(1) << fixed << stuAve(score, 1) << endl;
	
	//��X��2�C��score
	for (int i = 0; i < 3; i++) {
		cout << setprecision(1) << fixed << score[2][i] << ",";
	}
	cout << setprecision(1) << fixed << stuAve(score, 2) << endl;
	
	//��X��3�C��score
	for (int i = 0; i < 3; i++) {
		cout << setprecision(1) << fixed << score[3][i] << ",";
	}
	cout << setprecision(1) << fixed << stuAve(score, 3) << endl;
	
	//��X��4�C��score
	for (int i = 0; i < 3; i++) { 
		cout << setprecision(1) << fixed << score[4][i] << ",";
	}
	cout << setprecision(1) << fixed << stuAve(score, 4) << endl;

	//��X���Z��3�쥭��
	cout << "Average:" << setprecision(1) << fixed << *courseAve(score, 0) << ", " << *courseAve(score, 1) << ", " << *courseAve(score, 2) << endl;

	system("pause");
	return 0;

		
}