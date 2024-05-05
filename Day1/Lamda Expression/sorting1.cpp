#include<iostream>
using namespace std;

void sort(int []);
void inc(int []);
void dcr(int []);
// void inc(int [],int);
// void dcr(int [],int);
void mysorting(void(*)(int []),void(*)(int []));

int main()
{
   // mysorting(&sort);
    mysorting(&sort,&inc);
    mysorting(&sort,&dcr);
    return 0;
}

void mysorting(void(*fp1)(int []),void(*fp2)(int [])){
    int arr[5]={3,2,4,1,5};
    fp1(arr);
    fp2(arr);
    
}

void sort(int arr[]){
 for(int i = 0; i < 5; i++)    
    {    
      for(int j = i+1; j < 5; j++)    
        {    
            if(arr[j] < arr[i])    
            {    
                int temp = arr[i];    
                arr[i] = arr[j];    
                arr[j] = temp;     
            }     
        }     
    }     
    
}
    
void inc(int arr[]){
    cout<<"\ninc sorting:"<<endl;
 for(int i=0;i<5;i++)
    {
        cout<<arr[i]<<" ";   
    }
    cout<<endl;
   
}

void dcr(int arr[]){
    cout<<"dcr sorting"<<endl;
    for(int i=3;i>=0;i--)
    {
        for(int j=3;j>=0;j--)
        {
            if(arr[j]<arr[j+1]){
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
