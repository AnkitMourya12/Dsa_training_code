#include<iostream>
using namespace std;

void logic();
void fun(void (*)()); // void fun(void (*)());
void mpec();
int main()
{
    //void (*pf)(int);
    //fp=&logic();
    fun(&logic);
    fun(&mpec);

    return 0;
}
void logic()
{
    cout<<"logic fun call";
}

void fun(void (*fp)()){
    cout<<"call function argument"<<endl;
    logic();
}
void mpec(){
    cout<<"mpec 3rd student";
}