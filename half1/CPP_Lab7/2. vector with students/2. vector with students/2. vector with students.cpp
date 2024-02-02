#include <iostream>
#include <Windows.h>
#include <vector>
#include"Source.cpp"
using namespace std;



int main()
{
    SetConsoleCP(1251);
    SetConsoleOutputCP(1251);
    vector<Person> MyArr(10);

    Person MyPerson;



    int j = 0;
    bool loop=true;
    while (loop=true) {
        string option;
        cout << "Continue Y/N? ";
        cin >> option;
        if (option == "N" || option=="n") { goto passs; }

        MyPerson.AddPerson();
        MyArr[j] = MyPerson;
        j += 1;
    }
    passs:
    

    int size = sizeof(MyArr) / sizeof(MyArr[0]);
    for (int i = 0; i < j; i++) {
        std::cout << MyArr[i].Name << "\t" << MyArr[i].KT1 << "\t" << MyArr[i].KT2 << "\t" << MyArr[i].Total << "\t" << MyArr[i].automarc << "\n";
    }
}
