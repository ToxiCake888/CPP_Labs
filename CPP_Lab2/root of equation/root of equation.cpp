#include <iostream>
#include <clocale>
#include <Math.h>
using namespace std;

int square_roots_find() {
	int a, b, c;
	double d, x=0 , x1 , x2;

	cout << "введите коефициенты квадратного уравнения: ";
	cin >> a >> b >> c;
	if (a==0)
		cout << "ДУРАК, ПРОГА ДЛЯ КВАДРАТНОГО УРАВНЕНИЯ БЛИН";
	else
		d = b*b-4*a*c;//после этой строки
		if (d < 0)
			cout << "выражение говно и корней у него нет";
		else 
			if (d > 0)
			{   
				d = sqrt(d);
				x1 = (-b + d) / (2 * a);
				x2 = (-b - d) / (2 * a);
				cout << "x1 = " << x1 << endl;
				cout << "x2 = " << x2; 
			}
			else
			{
				x = (-b / (2 * a));
				cout << "x = " << x;
			}
	return 0;

}

int main() {
	setlocale(LC_ALL, "ru");
	square_roots_find();
	return 0;
}