#include<iostream>
#include<bits/stdc++.h>
using namespace std;


int main()
{
    vector<int>v{4,4,2,2,5,5};

      sort(v.begin(),v.end(), [](const int &a,const int &b)  ->bool
    {
        return a>b;
    });

    for_each(v.begin(),v.end(),[](int i){
        cout<<i<<" ";
    });

    // int p=unique(v.begin(),v.end(),[](int a,int b)
    // {
    //     return a==b;
    // });
    // v.resize(distance(v.begin(),p));
    //  for_each(v.begin(),v.end(),[](int i){
    //     cout<<i<<" ";
    // });
}