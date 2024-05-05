#include<iostream>
using namespace std;

void logic(int);
void logic2(int);

int main()
{
    void(*fp) (int);
    //logic(20);     // direct call
    fp=&logic;
    fp(40);

   // logic2(20);     // direct call
    fp=&logic2;
    fp(40);
    return 0;
}

void 
logic(int x){
    cout<<"function pointer  1:"<<x<<endl;
}

void 
logic2(int x){
    cout<<"function pointer  2 :"<<x<<endl;
}