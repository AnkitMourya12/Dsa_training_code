#include<iostream>
using namespace std;
template<typename T , int size>
// template<typename P>

class arr{
    public:
    T ar[size];
    T data=20;
    T ans;
    arr(){
        cout<<sizeof(ar);
    }
    void set(){
       cout<<size;
        
    }

};

int main(){
  arr<int,5>arr1;
  
//   arr<int>set();
   
    return 0;
}