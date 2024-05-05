#include<iostream>
using namespace std;
template<class T>
void logic(T x){
    cout<<"logic="<<x<<endl;
}

int main(){
   logic(1);
   logic(25.50);
   logic('A');

}