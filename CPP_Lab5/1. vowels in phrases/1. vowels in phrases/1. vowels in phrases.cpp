#include <iostream>
#include "Header.h"
#include <string>

using namespace std;
int vowelcounter(string[], int);

int main() {
	string phrases[5];
	int arr_len = size(phrases);
	for (int i = 0; i < 5;i++) {
		string str;
		getline(cin,str,'@');
		phrases[i] = str;
		if (str == "") {
			cout << "try again dumbass"<<"\n";
			i -= 1;
		}
	}

	cout<<"vowels: " ;
	return vowelcounter(phrases, arr_len);
}