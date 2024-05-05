#include<iostream>
using namespace std;

int main()
{
  
   int a=11,b=12,c;
   auto fp = [=,&c](){   // capture by value amd capture by refrence c (it also read & write)
   
     c=a+b;       // read +write but in a,b=> read only
    //a=99;           it shows error because read only
   
    cout<<"c:"<<c;
   };
   fp();

}