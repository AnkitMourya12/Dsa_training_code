
#include<iostream>
using namespace std;


template<typename T>
void fun(T x){
    cout<<x<<endl;
}
template<typename T,typename p>
//template<class T>    also use inplace of typenmae

void add(T x,p y){
    cout<<"logic="<<(x+y)<<endl;
}
int main(){
    fun<int>(20);
    fun<char>('A');
    add<int,int>(10,20);
    add<float,float>(11.22f,22.33f);
}