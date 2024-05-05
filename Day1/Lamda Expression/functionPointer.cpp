#include<iostream>
using namespace std;

void logic();

int main()
{
    void(*fp) ();
    logic();     // direct call
    fp=&logic;
    fp();
    return 0;
}

void 
logic(){
    cout<<"function pointer";
}