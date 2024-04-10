#include <iostream>
#include <math.h>

void func(int a,int b, int h){
    if(b<a){std::cout<<"\n"<<"func ended";return;}
    double e=2.71828182846;
    
    std::cout<<"a"<<"  "<<"function"<<"\n";
    while(a<=b){
        
        std::cout<<a<<"  "<<pow(e,-a)*sin(6*a)<<"\n";
        
        a+=h;
    }


    std::cout<<"\n"<<"func ended";
}