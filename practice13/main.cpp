//���צbcloud judge�|��,��vs�������
#include "StuCard.h"

int main() {
	//�ؤ@��ofstream, �}�ɼg�J�ɮ�
	ofstream out;
	out.open("StuCards.txt", ios::out | ios::app);

	double score1[3] = { 80.0, 70.0, 90.0 };
	StuCard s1("Jerry", 1, score1);
	s1.writeToFile(out);

	double score2[3] = { 85.0, 77.0, 95.0 };
	StuCard s2("John", 1, score2);
	s2.writeToFile(out);

	double score3[3] = { 83.0, 75.0, 70.0 };
	StuCard s3("Mary", 0, score3);
	s3.writeToFile(out);

	double score4[3] = { 73.0, 95.0, 67.0 };
	StuCard s4("Tom", 1, score4);
	s4.writeToFile(out);

	double score5[3] = { 88.0, 79.0, 71.0 };
	StuCard s5("Claire", 0, score5);
	s5.writeToFile(out);

	//����
	out.close();

	//��ifstream�}��Ū���ɮ�
	ifstream in;
	in.open("StuCards.txt", ios::in);

	StuCard s6[5] = { s1, s2, s3, s4, s5 };

	//Ū��
	for (int i = 0; i < 5; i++) {
		s6[i].readFromFile(in);
	}

	//����
	in.close();

	system("pause");
	return 0;
}