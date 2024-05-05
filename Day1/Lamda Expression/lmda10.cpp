#include<iostream>
using namespace std;

int main()
{
  
   int n1=2,n2=5;
   auto fp = [&n1,=](int a,int b,int &z){  //  error this exceptional case
   //    auto fp = [&a,&b,&c]()
   
     z=a+b+n1; 
     return z;     
            
   
    //cout<<"c:"<<c;
   };
   int a=10,b=30,c=0;
    cout<<" c:"<<c<<endl;
   fp(a,b,c);
   cout<<" c:"<<c;

}