#include<iostream>
using namespace std;

int main()
{
  
   int a=11,b=12,c;
   auto fp = [&](){   // capture by refrence all access)
   //    auto fp = [&a,&b,&c]()
     c=a+b;      
    a=c+b;
    b=c+a;          
   
    cout<<"c:"<<a;
   };
   fp();

}