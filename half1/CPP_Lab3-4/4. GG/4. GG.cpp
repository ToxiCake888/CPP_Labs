#include <iostream>
#include <string>
#include "Header.h"
using namespace std;

int main() {
	string num;
	int first_scale, second_scale;
	cout << "number: ";
	cin >> num;
	cout << "first scale: ";
	cin >> first_scale;
	cout << "second_scale: ";
	cin >> second_scale;

	//cout << mirror(num);
	//cout << convert_from_ten(num, second_scale);
	//cout << convert_to_ten(num , first_scale);
	cout << any_to_any(num , first_scale, second_scale);
	return 0;
}
