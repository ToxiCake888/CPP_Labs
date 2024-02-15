#include <iostream>
#include <clocale>
int gallons ;
using namespace std;
int main()
{
	setlocale(LC_ALL, "russian");
	cout << "введите кол-во галлонов\n";
	cin >> gallons;
	cout << "В литрах это:";
	return gallons*4;
}