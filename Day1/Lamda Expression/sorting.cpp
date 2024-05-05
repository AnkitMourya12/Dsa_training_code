#include<iostream>
using namespace std;

void sort(int []);
// void inc(int [],int);
// void dcr(int [],int);
void mysorting(void(*)(int []));


int main()
{
    mysorting(&sort);
    // mysorting(&sort,&inc);
    // mysorting(&sort,&dcr);
    return 0;
}

void mysorting(void(*fp1)(int [])){
    int arr[5]={3,2,4,1,5};
    fp1(arr);
    
    // fp2(arr);
}
void sort(int arr[]){

    //void inc(arr,n);
   // void dec(arr,n);

   //void inc(int arr[],int n){
 for(int i=0;i<5;i++)
    {
        for(int j=0;j<5;j++)
        {
            if(arr[j]>arr[j+1]){
                int t=arr[j];
                arr[j]=arr[j+1];
                arr[j+1]=t;

            }
        }
        
    }
    for(int i=0;i<5;i++){
        cout<<arr[i]<<" ";
    }
}


   

// void inc(int arr[],int n){
//  for(int i=0;i<n;i++)
//     {
//         for(int j=0;j<n;j++)
//         {
//             if(arr[j]>arr[j+1]){
//                 int t=arr[j];
//                 arr[j]=arr[j+1];
//                 arr[j+1]=t;

//             }
//         }
        
//     }
// }