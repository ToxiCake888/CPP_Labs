
#include <iostream>
#include <string.h>
using namespace std;

void func(string str);
int main()
{
    string str;
    cin >> str;
    
    func(str);


    return 0;
}

void func(string str) {
    bool checker = true;
    int len = size(str)-1, len2= size(str) - 1;
    for (int i = 0; i < len / 2; i++) {
        if (str[i]!=str[len2]) {
            checker = false;
        }
        len2 -= 1;
    }
    cout <<"answer: " << checker;
}