
#include <iostream>

using namespace std;
void func(int *myarr ,int scale);

int main()
{
    const int scale = 3;
    
    int myarr[scale];

    func(myarr,scale);

    return 0;
}

void func(int* myarr, int scale) {
    int below = 0, higher = 0;

    for (int i = 0; i < scale; i++) {
        cin >> myarr[i];
        if (myarr[i] < 0) {
            below += 1;
        }
        else {
            higher += 1;
        }
    }

    if (higher > below) {
        cout << "higher is more then below";
    }
    else {
        cout << "below is more then higher";
    }
}