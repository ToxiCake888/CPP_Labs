#include <iostream>
#include "testfile.h"
#include "testfilesource.cpp"

using namespace std;
int main(){

    Box mycon;

    mycon.SetHig(10);
    mycon.SetLen(20);
    mycon.SetWid(15);
    mycon.SetNam("qweqwe");

    cout<<mycon.Volueme();

    return 0;
}

    // Box mycon;
    // mycon.name="dasdasdas";
    // mycon.width=10;
    // mycon.high=30;
    // mycon.length=25;

    // cout<<"V: "<<mycon.high*mycon.length*mycon.width<<"\n";

    // Box mycon2;
    // mycon2.name="dasdasdas";
    // mycon2.width=15;
    // mycon2.high=30;
    // mycon2.length=25;

    // cout<<"V2: "<<mycon2.high*mycon2.length*mycon2.width;