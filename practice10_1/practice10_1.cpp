#include <iostream>
#include <sstream>
#include <string>
using namespace std;

void printStringArray (string word[], int size){
	for (int i=0; i<size; i++){  //將word[i]依序輸出 
		cout << word[i] << endl;
	}
}

int main(){
	string enter; //宣告輸入的字串 
	getline (cin, enter);  //將enter包括空格一起輸入 
	
	int i=0;
	
	stringstream kk(enter);  //將enter字串流 命名成kk 
	
	string word[10];  //宣告字串陣列word 
	
	while (!kk.eof()){  // 若kk沒有空格時導入word[i] 
		kk >> word[i];
		i++;
	} 
	
	printStringArray(word, i);
	
	cout << "Length: " << enter.length() << endl; //輸出字串enter的長度 (包括空格 
	
}
