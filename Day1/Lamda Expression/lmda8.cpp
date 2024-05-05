#include<iostream>
using namespace std;

int main()
{
  
   
   auto fp = [](int a,int b,int &z){   // capture by refrence all access)
   //    auto fp = [&a,&b,&c]()
   
     z=a+b; 
     return z;     
            
   
    //cout<<"c:"<<c;
   };
   int a=10,b=30,c=0;
    cout<<" c:"<<c<<endl;
   fp(a,b,c);
   cout<<" c:"<<c;

}