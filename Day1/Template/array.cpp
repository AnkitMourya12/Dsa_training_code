#include<iostream>
using namespace std;
template<typename T>
void sort(T arr[],T n){
    T temp;
    int i,j;
    for(i=0;i<n;i++){
        for(j=i;j<n;j++){
            if(arr[i]>arr[j]){
                temp=arr[i];
                arr[i]=arr[j];
                arr[j]=temp;
            }
        }
    }
    for(i=0;i<n;i++){
        cout<<arr[i]<<endl;
    }
}


int main(){
    int arr[]={2,3,5,1};
    sort(arr,4);
}