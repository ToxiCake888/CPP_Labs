
#include <iostream>
#include <random>
using namespace std;
int main()
{   
    const int n = 30;
    int arr[n];
    int counter=0,maxcounter=0;
    for (int i = 0; i < n; i++) {
        arr[i] = rand()%2;
       // cout << arr[i]<<" ";                  //для проверки раскоментить эту строку

        if (arr[i] == 0) { counter += 1;}
        else {
            if (maxcounter < counter){
                maxcounter = counter; 
            }
            counter = 0; 
        }
    }
    cout << maxcounter;
}
