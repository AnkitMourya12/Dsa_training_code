#include<iostream>
using namespace std;
int main(){
    void (*fptr)()=[](){
        cout<<"lmda expreession";
    };
    fptr();
    return 0;
}