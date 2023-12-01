#include <iostream>
#include <string>
#include "Header.h"

using namespace std;
static double discriminant;

double calculate_discriminant(int,int,int);
int calculate_root(int,int,double);

int main() {
	int a,b,c;
	cout << "insert a: ";
	cin >> a;
	cout << "insert b: ";
	cin >> b;
	cout << "insert c: ";
	cin >> c;
	discriminant = calculate_discriminant(a,b,c);
	return calculate_root(a, b, discriminant);
}