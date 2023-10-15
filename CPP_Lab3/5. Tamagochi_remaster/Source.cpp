#include <iostream>
using namespace std;

int check_num() 
{
	int num;
	cin >> num;
	if (num > 2 || num < 0) 
	{
		cout << "DUMBASSS";
		return check_num();
	}
	cout << endl;
	return num;
}

bool decoder(int x) {
	if (x == 1) {
		return true;
	}
	else
	{
		return false;
	}
}


int stat_0() {
	cout << "eat an apple? " << endl;
	cout << "1. dont eat  = 0 " << endl;
	cout << "2. eat it all omnomnom = 1 " << endl;
	cout << "choice: ";
	int num;
	num = check_num();
	return num - 1;
}

int stat_1() {
	cout << "u feel sickness,want cure? " << endl;
	cout << "1. no " << endl;
	cout << "2. yep " << endl;
	cout << "choice: ";
	int num;
	num = check_num();
	return num-1;
}

int stat_2() {
	cout << "take bath? " << endl;
	cout << "1. no " << endl;
	cout << "2. yep " << endl;
	cout << "choice: ";
	int num;
	num = check_num();
	return num-1;
}

int stat_3() {
	cout << "r u sad? " << endl;
	cout << "1. no " << endl;
	cout << "2. yep " << endl;
	cout << "choice: ";
	int num;
	num = check_num();
	return num-1;
}