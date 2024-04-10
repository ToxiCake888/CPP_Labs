#include <iostream>
#include <cmath>
#include "header.h"
using namespace std;
int main() {
	trapezoid trap1;
	trap1.a = 5.4;
	trap1.b = 10.5;
	trap1.h = 8;
	trap1.alpha = 45;
	trap1.beta = 45;
	trapezoid trap2(17.1,17.1,-4,45);  //ошибка ввода для ловли ошибки
	cout << trap1.midlane()<<endl;
	cout << trap1.S() << endl;
	cout << trap1.S(trap1.h, trap1.midlane())<<endl;
	cout <<trap2.S()<<endl ;

	return 0;
}



double trapezoid::midlane() {return (a + b) / 2;}
double trapezoid::C() { return h / sin(alpha); }
double trapezoid::D(){return h / sin(beta);}
double trapezoid::S() { return a*b*h/2; }
double trapezoid::S(double h, double m) { return h * m; }
double trapezoid::P() { return a + b + C() + D(); }
trapezoid::trapezoid(){ a = -1, b = -1, h = -1, c = -1, d = -1; alpha = -1, beta = -1; };
trapezoid::trapezoid(double a1, double b1, double h1, int corner){
	if(a1<=0){
		wronga1:
		cout << "wrong input , give a: ";
		cin >> a1;
		if (a1 <= 0) { goto wronga1;}
	}
	if (b1 <= 0) {
	wrongb1:
		cout << "wrong input , give b: ";
		cin >> b1;
		if (b1 <= 0) { goto wrongb1; }
	}
	if (h1 <= 0) {
	wrongh1:
		cout << "wrong input , give h: ";
		cin >> h1;
		if (h1 <= 0) { goto wrongh1; }
	}
	if (corner <= 0) {
	wrongcorner:
		cout << "wrong input , give corner: ";
		cin >> corner;
		if (corner <= 0 or corner >=180) { goto wrongcorner; }
	}
	a = a1; b = b1; h = h1; alpha = corner; beta = 180-corner;
};