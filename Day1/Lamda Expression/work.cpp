#include<iostream>
using namespace std;



int add(int,int);
int sub(int,int);
void calcu(int (*)(int,int),int (*)(int,int));
int main()
{

    calcu(&add,&sub);

    return 0;
}
void calcu(int (*fp1)(int,int),int (*fp2)(int,int));{

    int x=fp1(5,6);
   int y= fp2(5,6);
}


int add(int x,int y){
    cout<<"add:"<<x+y;
    return 0;
}
int sub(int x,int y){
    cout<<"add:"<<x-y;
}






