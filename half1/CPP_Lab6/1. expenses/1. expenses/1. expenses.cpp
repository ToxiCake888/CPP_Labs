using namespace std;
#include "Header.h"
#include <iostream>
#include <Windows.h>
#include <string>
#include <algorithm>

int main()
{
    SetConsoleCP(1251);
    SetConsoleOutputCP(1251);
    int days[7][10]{ 0 };
    int sum = 0;
    int max_expenses = 0;
    int min_expenses = 100;
    int pn = 0,vt = 0,sr = 0,cht = 0,pt = 0,sb = 0,vs = 0;

    cout << "input expenses(max 10, to end type 0)\n";
    for (int i = 0; i < 7; i++)
    {
        switch (i)
        {
        case 0: cout << "понедельник: "; break;
        case 1: cout << "вторник: "; break;
        case 2: cout << "среда: "; break;
        case 3: cout << "четверг: "; break;
        case 4: cout << "пятница: "; break;
        case 5: cout << "суббота: "; break;
        case 6: cout << "воскресенье: "; break;
        default:
            break;
        }

        int day_expenses = 0;
        string checker;
        for (int j = 0; j < 10; j++)
        {

            
            cin >> checker;

            try
            {
                if (stoi(checker) == 0)
                {
                    break;
                }
                else if (stoi(checker) > 0 && stoi(checker) < 11)
                {
                    days[i][j] = stoi(checker);
                    sum += stoi(checker);
                    day_expenses += stoi(checker);

                    switch (i)                          //sum in day
                    {
                    case 0: {
                        pn += stoi(checker);
                        break;
                    }
                    case 1: {
                        vt += stoi(checker);
                        break;
                    }
                    case 2: {
                        sr += stoi(checker);
                        break;
                    }
                    case 3: {
                        cht += stoi(checker);
                        break;
                    }
                    case 4: {
                        pt += stoi(checker);
                        break;
                    }
                    case 5: {
                        sb += stoi(checker);
                        break;
                    }
                    case 6: {
                        vs += stoi(checker);
                        break;
                    }
                    default:
                        break;
                    }
                }
                else if (stoi(checker) >= 11) {
                    j -= 1;
                    cout << "task said that 10 is max :( ";
                    cout << "try again: ";
                }
                else {
                    throw (checker);
                }

            }
            catch (invalid_argument)                //string exception
            {
                j -= 1;
                cout << "IS IT NUMBER?! --> " << checker << "\n" << "try again: ";
            }
            if (day_expenses > max_expenses) max_expenses = day_expenses;
            if (day_expenses < min_expenses) min_expenses = day_expenses;
            cout << day_expenses;
        }
        cout << "\n";
    }

    for (int i = 0; i < 7; i++)              //вывод массива
    {
        for (int j = 0; j < 10; j++)
        {
            cout << days[i][j] << " ";
        }
        cout << "\n";
    }

    int week[7]{ pn,vt,sr,cht,pt,sb,vs };
    int size = sizeof(week) / sizeof(week[0]);
    sort(week,week+size);

    string min_day, max_day;

    if (pn == week[0]) {
        min_day = "pn";
    }
    else if (vt == week[0]) {
        min_day = "vt";
    }
    else if (sr == week[0]) {
        min_day = "sr";
    }
    else if (cht == week[0]) {
        min_day = "cht";
    }
    else if (pt == week[0]) {
        min_day = "pt";
    }
    else if (sb == week[0]) {
        min_day = "sb";
    }
    else{
        min_day = vs;
    }

    if (pn == week[6]) {
        max_day = "pn";
    }
    else if (vt == week[6]) {
        max_day = "vt";
    }
    else if (sr == week[6]) {
        max_day = "sr";
    }
    else if (cht == week[6]) {
        max_day = "cht";
    }
    else if (pt == week[6]) {
        max_day = "pt";
    }
    else if (sb == week[6]) {
        max_day = "sb";
    }
    else {
        max_day = "vs";
    }

    cout << "Анализ: \n";
    cout << "all: " << sum<<"\n";
    cout << "medium: " << sum/7.0 << "\n";
    cout << "max: " << max_expenses << "\n";
    cout << "min: " << min_expenses << "\n";
    cout << "min_day: " << min_day << "\n";
    cout << "max_day: " << max_day << "\n";
    cout << "понедельник: " << pn << "\n";
    cout << "вторник: " << vt << "\n";
    cout << "среда: " << sr << "\n";
    cout << "четверг: " << cht << "\n";
    cout << "пятница: " << pt << "\n";
    cout << "суббота: " << sb << "\n";
    cout << "воскресенье: " << vs << "\n";
}

