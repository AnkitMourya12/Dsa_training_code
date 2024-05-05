#include<iostream>
#include<stdexcept>
#include<exception>

using namespace std;
// int main(){
// cout<<"welcome\n";
//     int a;
//     int b;
//     cin>>a>>b;
//     try{
//         if(b==0) throw "zero devision error show ";
//     int c=a/b;                           //  5if b=0  zerodivision error occure  // runtime error
//     cout<<c<<" "<<"thanks";
//     }
//     catch(const char *a){
//         cout<<"exception occured"<<a<<endl;
        
//     }
//     cout<<"\nthanks";
// }



int main(){
cout<<"welcome\n";
    int a;
    int b;
    cin>>a>>b;
    try{
        if(b==0) throw runtime_error("zero devision error show ");
    int c=a/b;                           //  if b=0  zerodivision error occure  // runtime error
    cout<<c<<" "<<"thanks";
    }
    catch(runtime_error &a){
        cout<<"exception occured"<<endl;
        cout<<a.what();
        
    }
    cout<<"\nthanks";
}







