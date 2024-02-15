#include <iostream>
#include <Windows.h>
#include"Source.cpp"
#include "Header.h"
using namespace std;



int main()
{
    SetConsoleCP(1251);
    SetConsoleOutputCP(1251);
    Person MyArr[10];

    Person MyPerson;

    int QuantityStudents;
    std::cout << "Quantity of Students: ";
    std::cin >> QuantityStudents;
    for (int i = 0; i < QuantityStudents;i++) {
        MyPerson.AddPerson();
        MyArr[i] = MyPerson;
    }
    
    int size = sizeof(MyArr) / sizeof(MyArr[0]);
    for (int i = 0; i < QuantityStudents; i++) {
        std::cout << MyArr[i].Name << "\t" << MyArr[i].KT1 << "\t" << MyArr[i].KT2 << "\t" << MyArr[i].Total << "\t" << MyArr[i].automarc << "\n";
    }
}
