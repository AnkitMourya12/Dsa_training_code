#include<iostream>
using namespace std;
template<typename T>
void add(T a,T b){
    cout<<a+b<<endl;
}

template<typename T, typename P>
void sub(T a,P b){
    cout<<a-b<<endl;

}
int main(){
    
 add(12,13);
 sub(14,13.5);
  
   
}