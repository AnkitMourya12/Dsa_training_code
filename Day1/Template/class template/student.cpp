#include<iostream>
using namespace std;
template<typename T1,typename T2>
class stu{
    public:
    T1 mark,roll;
    T2 name ;
    stu(T1 m,T2 n,T1 r){
         mark=m;
         roll=r;
         name=n;
    }
    void get()
    {
        cout<<"marks="<<mark<<endl;
        cout<<"roll="<<roll<<endl;
        cout<<"name="<<name<<endl;

    }
    
};

int  main(){
    stu<int,string>s1(101,"Akm",97);
   s1.get();
    return 0;
}