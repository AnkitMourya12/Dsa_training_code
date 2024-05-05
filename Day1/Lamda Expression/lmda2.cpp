#include<iostream>
using namespace std;

void logic()
{
    cout<<"logic call"<<endl;
}

int main()
{
   auto fp=&logic;
    void(*fp2)()=[](){
        cout<<"lmda exp";
    };
    fp();
    fp2();

}