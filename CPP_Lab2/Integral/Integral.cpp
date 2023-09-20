#include <iostream>
#include <clocale>
using namespace std;
int def_integrall(unsigned int number);


int main() {
	setlocale(LC_ALL, "ru");
	unsigned int num;
	cout << "введите число от 0 до 12: ";
	cin >> num;
	if (num <= 12 and num >= 0)
		cout << def_integrall(num);
	else
		cout << "слишком большое или малое число";
	return 0;
}

int def_integrall(unsigned int number) {
	int  lastnum = 1;
	if (number > 1)
		return number * def_integrall(number - 1);

}