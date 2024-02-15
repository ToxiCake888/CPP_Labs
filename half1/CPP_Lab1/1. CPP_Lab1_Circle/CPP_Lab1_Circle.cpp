#include <iostream>
int r;
double p = 3.14;
void main() {
	std::cout << "Insert radius ";
	std::cin >> r;
	std::cout << "L="<<2*p*r <<'\n';
	std::cout << "S=" << p * r* r;


}