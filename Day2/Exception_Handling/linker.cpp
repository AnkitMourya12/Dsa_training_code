#include<iostream>
using namespace std;
class A{
    public:
    int a;
    static int b;

    
};
int A::b;       // resolve linker error
int main(){
    A obj;
   A::b=20;          // generate linker error
   cout<<A::b;
    return 0;
}