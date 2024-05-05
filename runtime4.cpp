#include<iostream>
#include<stdexcept>
#include<exception>
using namespace std;
int main(){
     int n;
    cin>>n;
    cout<<"welcome\n";
    
    try{  
    cout<<string("chintu chinkara ji\n").substr(n);  // exception depand on user input  // if out of range then abnormal termination reach it is runtime error
    }                                     
    catch(...){   
        cout<<"out of range error?\n";
       // cout<<errori.what();
    }
    cout<<"I am in mpgi campus !!\n";
    cout<<"thanks ";
}