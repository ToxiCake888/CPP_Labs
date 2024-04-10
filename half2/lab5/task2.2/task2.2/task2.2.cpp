#include <iostream>
#include <cmath>
#include <string>
#include "header.h"
using namespace std;
int main(){

	triangle tr1;
	cout << tr1.S() << endl;
	cout << tr1.S() << endl;
	cout << tr1.P() << endl;

	return 0;
}

double triangle::midlane(double a) { return 1.0 / 2 * a; }
double triangle::C() { return pow((pow(a, 2) * pow(b, 2) - a * b * cos(alpha)),1.0/2.0); }
double triangle::S(double newa, double newh) { return 1.0 / 2.0 * newa * newh; }
double triangle::S(){
	double p=P()/2;
	return pow((p*(p-a)*(p-b)*(p-c)), 1 / 2);
}
double triangle::P() { return a * b * C(); }

triangle::triangle(){

	cout << "insert first side: ";
	string rawa;
	cin >> rawa;
	cout << endl;
	testa:
	try {
		a=stod(rawa);
	}
	catch(const std::invalid_argument& e){
		cout << "wrong input , give a: ";
		cin >> rawa;
		goto testa;
	}

	cout << "insert second side: ";
	string rawb;
	cin >> rawb;
	cout << endl;
testb:
	try {
		b = stod(rawb);
	}
	catch (const std::invalid_argument& e) {
		cout << "wrong input , give b: ";
		cin >> rawb;
		goto testb;
	}

	cout << "insert third side: ";
	string rawc;
	cin >> rawc;
	cout << endl;
testc:
	try {
		c = stod(rawc);
	}
	catch (const std::invalid_argument& e) {
		cout << "wrong input , give c: ";
		cin >> rawc;
		goto testc;
	}

	h = (2 * S()) / b;
	alpha = acos((pow(a, 2) + pow(b, 2) - pow(c, 2)) / (2 * a * b));
	beta = acos((pow(a, 2) - pow(b, 2) + pow(c, 2)) / (2 * a * b));
	gamma = acos((-pow(a, 2) + pow(b, 2) + pow(c, 2)) / (2 * a * b));
}