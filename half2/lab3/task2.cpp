#include <iostream>
#include <stdlib.h>

void func(int n,int myarr[],int push);

int main(){
    const int n=10;
    int arr[n]={0};
    int push;
    
    std::cout<<"push by: ";
    std::cin>>push;

    push=push%n;

    for(int i=0;i<n;i++){
        int x=rand()%10;
        arr[i]=x;
    }

    func(n,arr,push);

    

    return 0;
}

void func(int n,int myarr[],int push){
    const int nn=10;

    for(int i=0;i<nn;i++){
        std::cout<<myarr[i]<<" ";
    }

    int bufarr[nn]={0};
    for(int i=0;i<nn;i++){
        int x=i+push;
        if(i+push>=10){x=(i+push)%10;}

        bufarr[x]=myarr[i];
    }

    std::cout<<"\n"<<"\n"<<"\n";


    for(int i=0;i<nn;i++){
        std::cout<<bufarr[i]<<" ";
    }


}