#include <iostream>
int x ;
double a , b;
using namespace std;


int Calculator() {
	cout << "1. Sum" << endl;
	cout << "2. Subtraction" << endl;
	cout << "3. Multiplication" << endl;
	cout << "4. Division" << endl;
	cout << "5. End" << endl;
	cout << "Number of action: ";
	cin >> x;
	if (x >= 1 and x <= 5)
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
		case 4:
			cout << "Insert two numbers: ";
			cin >> a >> b;
			cout << "a / b = " << a / b << endl;
			break;
		case 5:
			return 0;
		}
	else
		cout << "Wrong input"<<endl;
	Calculator();
}


void main() {
	Calculator();
}