#include <iostream>
#include <string>
#include <math.h>

using namespace std;

double calculate_discriminant(int a, int b, int c) {
	double d = b * b - 4 * a * c;
	return d;
}


int calculate_root(int a, int b,double d) {
	if (d < 0) {
		cout << "no roots";
		return -1;
	}
	else if (d == 0) {
		cout <<"x1 = x2 = " << -b / (2*a);
		return 0;
	}
	else {
		cout << "x1 = " << (-b + sqrt(d)) / (2 * a)<<"\n";
		cout << "x2 = " << (-b - sqrt(d)) / (2 * a);
		return 1;
	}
}