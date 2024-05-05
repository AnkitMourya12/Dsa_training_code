#include<iostream>
using namespace std;

class date{
    private:
    // public:
    int day,mon,year;

    public:
    date(int d,int m,int y){
        day=d;
        mon=m;
        year=y;
    }
    int operator<(date dt){
        if(this->year<dt.year){
            return 1;
        }
        if(year==dt.year && mon<dt.mon){
            return 1;
        }
         if(year==dt.year && mon==dt.mon && day<dt.day){
            return 1;
            
        }
        return 0;
    }
        friend ostream& operator<<(ostream &o, date &dt);
    


};
// cout<<tem overload
ostream& operator<<(ostream &o,date &dt){
    o<<dt.day<<"/"<<dt.mon<<"/"<<dt.year;
    return o;
}
template<typename T>
T logic(T &a, T &b){
    return a<b?a:b;
}
int main(){
    int i=10,j=20;
    cout<<logic(i,j)<<endl;
    date dt1(17,11,2021),dt2(23,12,2023);
    date tmp=logic<date>(dt1,dt2);
    //cout<<tmp.day<<"/"<<tmp.mon<<"/"<<tmp.year;           // public kerne ke liye
    cout<<tmp;                  //operator  << overload
    return 0;
}

