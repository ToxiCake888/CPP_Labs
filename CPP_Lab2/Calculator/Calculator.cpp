#include <iostream>
int x , a , b;
using namespace std;


void Calculator() {
	cout << "1. Sum" << endl;
	cout << "2. Subtraction" << endl;
	cout << "3. Multiplication" << endl;
	cout << "Number of action: ";
	cin >> x;
	if (x >= 1 and x <= 3)
		switch (x)
		{
		case 1:
			cout << "Insert two numbers: ";
			cin >> a >> b;
			cout << "a + b = " << a + b << endl;
			break;
		case 2:
			cout << "Insert two numbers: ";
			cin >> a >> b;
			cout << "a - b = " << a - b << endl;
			break;
		case 3:
			cout << "Insert two numbers: ";
			cin >> a >> b;
			cout << "a * b = " << a * b << endl;
			break;
		}
	else
		cout << "Wrong input"<<endl;
	Calculator();
}


void main() {
	Calculator();
}