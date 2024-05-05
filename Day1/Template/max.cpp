//use of template function
#include<iostream>
using namespace std;
 template <typename X, typename Y>
 void max(X x,Y y)
 {
    x>y?cout<<"x is greater "<<x<<endl : cout<<"y is greater "<<y<<endl;
 }
 int main()
 {
 	max<int ,int>(55,66);
 	max<char,char>('A','D');
 	max<float,float>(2.25f,1.65f);
 }