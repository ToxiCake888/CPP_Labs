#include <iostream>
#include <clocale>
using namespace std;
int def_integrall(unsigned int number);				


int main() {
	setlocale(LC_ALL, "ru");
	unsigned int num;
	int i = 0;
	//for (int i = 0; i < 5; i--)
	while (i<5)
	//do
	{
	
	cout << "введите число от 0 до 12(-1 для выхода): ";
	cin >> num;
	if (num == -1) {
		goto finish;
	}
	if (num <= 12 and num >= 0)
		cout << "Answer: " << def_integrall(num) << endl;
	else
		cout << "слишком большое или малое число";
	i-=1;
	} //while (i < 5);
	finish:
	return 0;
}

int def_integrall(unsigned int number) {
	int  lastnum = 1;
	if (number > 1)
		return number * def_integrall(number - 1);

}