#include<iostream>
using namespace std;

int main()
{
  
   int a=11,b=12;
   auto fp = [=](){   // capture for read only
   int x=33;
    int c=a+b+x;       // read +write but in a,b=> read only
    //a=99;           it shows error because read only
    cout<<"c:"<<c;
   };
   fp();

}