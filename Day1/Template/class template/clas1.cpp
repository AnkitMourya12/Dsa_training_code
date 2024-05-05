#include<iostream>
using namespace std;
template<class T>

class A{
    public:
    T data;
    A(T d){
        data=d;
        cout<<data<<" "<<"sir";
    }
};

int main(){
    A<string>ob("Rajeev");
   
    return 0;
}