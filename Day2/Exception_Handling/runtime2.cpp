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
    // throw out_of_range("MPGI error\n");           // explicitely throw error by coder
    }
                                                  // cout<<"POK";      //error
    catch(out_of_range &errori){
        cout<<"out of range error?\n";
       // cout<<errori.what();
    }
   
    cout<<"I am in mpgi campus !!\n";
    cout<<"thanks ";
}