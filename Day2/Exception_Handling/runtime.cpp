#include<iostream>
#include<stdio.h>
using namespace std;
int main(){
cout<<"mam'm maintain class\n";
try{
printf("%s",56.33f); throw "specifier type error " ;
}                // runtiime
catch(const char *a){
    cout<<"exception occured";
}
cout<<"mam'm maintain class\n";

}