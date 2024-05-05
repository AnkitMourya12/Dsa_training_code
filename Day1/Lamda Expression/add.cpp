#include<iostream>
using namespace std;
void sum(int,int);
int main()
{
    void (*fp) (int,int);
    fp=&sum;
    fp(20,30); 
    return 0;
}
void sum(int x,int y){
    cout<<"Sum: "<<(x+y)<<endl;
}

