#include<iostream>
using namespace std;

int main()
{
    auto ptr=[](){
        int a=10,b=20,c;
        c=a+b;
        cout<<"lmda exp:"<<c;
    };
    ptr();
   
}