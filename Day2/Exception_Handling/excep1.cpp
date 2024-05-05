#include<iostream>
//#include<stdio.h>
using namespace std;
//int a;
int main()
{   extern int a;        // m/m not allocate to 'a'
a=20; // linker error
printf("%d",a);
    cout<<"hello";
    printf("hello");
}
