#include <iostream>
#include <clocale>
int a,b;
int main() {
	setlocale(LC_ALL, "russian");
	std::cout << "введите первое число\n";
	std::cin >> a;
	std::cout << "введите второе число\n";
	std::cin >> b;
	std::cout << "Сумма: ";
	return a + b;
}