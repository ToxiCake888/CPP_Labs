#include <iostream>
#include <Windows.h> //методы консоли , setconsolecp
#include <string>   //метод getline
using namespace std;


double years, days, hours, minutes, seconds;
void Convertation(string a);

int main() {
    SetConsoleCP(1251);
    SetConsoleOutputCP(1251);
    cout << "1. Годы в дни" << endl;
    cout << "2. Дни в часы" << endl;
    cout << "3. Дни в минуты" << endl;
    cout << "4. Часы в минуты" << endl;
    cout << "5. Часы в секунды" << endl;
    cout << "6. Минуты в секунды" << endl;
    cout << "Введите вариант: ";

    string variant;
    getline(cin, variant);
    Convertation(variant);
    return 0;
}

void Convertation(string a) {

    if (a == "Годы в дни")
    {
        cout << "Введи годы ";
        cin >> years;
        cout << years * 365;
    }

    else if (a == "Дни в часы")
    {
        cout << "Введи дни ";
        cin >> days;
        cout << days * 24;
    }

    else if (a == "Дни в минуты")
    {
        cout << "Введи дни ";
        cin >> days;
        cout << days * 24 * 60;
    }

    else if (a == "Часы в минуты")
    {
        cout << "Введи часы ";
        cin >> hours;
        cout << hours * 60;
    }

    else if (a == "Часы в секунды")
    {
        cout << "Введи часы ";
        cin >> hours;
        cout << hours * 60 * 60;
    }

    else if (a == "Минуты в секунды")
    {
        cout << "Введи минуты ";
        cin >> minutes;
        cout << minutes * 60;
    }
    else
        cout << "Неверный ввод";

}



