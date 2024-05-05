#include<iostream>
#include<exception>
#include<windows.h>
using namespace std;

class Overspeed:public exception{
    int speed;
    public:

    void getspeed(){
        cout<<"ur car speed id"<<speed<<endl;

    }
    void setspeed(){
        this->speed=speed;
    }

};
class car {
    int speed;
    public:
   car()
   {
    speed=0;
    cout<<"car speed is"<<speed<<endl;
   }

   void speedlimit(){
    for(; ; ){
        speed+=10;

        sleep(2000);
        if(speed>250){
            Overspeed s;
            s.setSpeed(speed);
            throw s;
        }
    }
   }
};

int main(){
    car ob;
    try{
        ob.speedlimit();
    }
    catch(Overspeed s){
        cout<<s.what()<<endl;
        s.getspeed();
    }
}