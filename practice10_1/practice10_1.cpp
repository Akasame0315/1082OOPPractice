#include <iostream>
#include <sstream>
#include <string>
using namespace std;

void printStringArray (string word[], int size){
	for (int i=0; i<size; i++){  //�Nword[i]�̧ǿ�X 
		cout << word[i] << endl;
	}
}

int main(){
	string enter; //�ŧi��J���r�� 
	getline (cin, enter);  //�Nenter�]�A�Ů�@�_��J 
	
	int i=0;
	
	stringstream kk(enter);  //�Nenter�r��y �R�W��kk 
	
	string word[10];  //�ŧi�r��}�Cword 
	
	while (!kk.eof()){  // �Ykk�S���Ů�ɾɤJword[i] 
		kk >> word[i];
		i++;
	} 
	
	printStringArray(word, i);
	
	cout << "Length: " << enter.length() << endl; //��X�r��enter������ (�]�A�Ů� 
	
}
