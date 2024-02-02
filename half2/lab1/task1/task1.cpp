

#include <iostream>
using namespace std;

int main()
{
    int num1 ,num2;
    cout << "start: ";
    cin >> num1;
    cout << "end: ";
    cin >> num2;

    while(num1<=num2) {
        for (int i = 0; i < num1;i++ ) {
            cout << num1 << " ";
        }
        cout << '\n';
        num1 += 1;
    }
}
