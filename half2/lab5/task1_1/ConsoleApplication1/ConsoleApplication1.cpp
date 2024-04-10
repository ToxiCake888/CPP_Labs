#include <iostream>
#include <iomanip>
#include <windows.h>
using namespace std;

class File {
public:
    string name;
    double byte;
};

int main() {
    SetConsoleCP(1251);
    SetConsoleOutputCP(1251);

    File files_array[3];
    files_array[0].name = "name1.cpp";
    files_array[0].byte = 1.000455234;
    files_array[2].name = "name3.cpp";
    files_array[2].byte = 0.000995889;

    cout << "второй файл, имя: ";
    cin >> files_array[1].name;
    cout << endl << "второй файл, размер: ";
    cin >> files_array[1].byte;

    cout << setw(15) << "File" << setw(20) << "scale in bytes " << endl;
    for (int i = 0; i < 3; i++) {
        cout << setw(15) << files_array[i].name << setw(15) << files_array[i].byte << " byte" << endl;
    }


    return 0;
}
