#include<iostream>
using namespace std;

class date{
    private:
    
    int day,mon,year;

    public:
    date(int d,int m,int y){
        day=d;
        mon=m;
        year=y;
    }
    
        friend ostream& operator<<(ostream &o, date &dt);
};

ostream& operator<<(ostream &o,date &dt){
    o<<dt.day<<"/"<<dt.mon<<"/"<<dt.year;
    return o;
}
template<typename T>
T swapmy(T &a, T &b){
    
    T tmp=a;
    a=b;
    b=tmp;

}
int main(){
    int i=10,j=20;
    swapmy<int>(i,j);
    cout<<i<<" "<<j<<endl;
    char ch='A',dh='Z';
    swapmy<char>(ch,dh);
     cout<<ch<<" "<<dh<<endl;

    date dt1(17,11,2021),dt2(23,12,2023);
    
    swapmy<date>(dt1,dt2);
    cout<<dt1<<"  "<<dt2;                  
    return 0;
}

