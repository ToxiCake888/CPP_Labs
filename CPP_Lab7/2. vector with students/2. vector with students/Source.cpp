#include <iostream>


struct Person {
public:
	std::string Name{ "Undefined" };
	int KT1{ 0 }, KT2{ 0 }, Total{ 0 };
	bool automarc{ false };

	Person() {}

	void AddPerson() {
		std::cout << "имя: ";
		std::string Add_name;
		std::cin >> Add_name;

		int maxmarcs = 8, Add_kt1 = 0, Add_kt2 = 0;

		for (int j = 1; j < 3; j++) {
			std::cout << "marcs for KT" << j << ": ";
			for (int i = 0; i < maxmarcs; i++) {

				int marc;
			again:
				std::cin >> marc;
				if (marc > 12 || marc < 0) {
					std::cout << "marc err";
					goto again;
				}

				if (j == 1) {
					Add_kt1 += marc;
				}
				else {
					Add_kt2 += marc;
				}
			}
		}
		Name = Add_name;
		KT1 = Add_kt1;
		KT2 = Add_kt2;
		Total = (KT1 + KT2) / 2;
		if (Total > 50) { automarc = true; }
	}
};