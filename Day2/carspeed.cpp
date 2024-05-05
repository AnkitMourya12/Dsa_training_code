//custom exceptions
#include<iostream>
#include<stdexcept>
#include<exception>
#include<windows.h>
using namespace std;
class overspeed: public exception{
	int speed;
	public:
		const char *what()
		{
			return "check out car speed !!";
		}
		void getspeed()
		{
			cout<<"car speed is : "<<speed<<endl;
		}
		void setspeed(int speed)
		{
			this->speed=speed;
		}
};

class car{
	int speed;
	   public:
	   	car()
	   	{
	   		speed=0;
	   		cout<<"car speed is : "<<speed<<endl;
		   }
		void speedlimit()
		{
			for(; ;)
			{
				speed+=10;
				cout<<"car speed is : "<<speed<<endl;
				Sleep(1000);
				if(speed>250)
				{
					overspeed s;
					s.setspeed(speed);
					throw s;
				}
			}
		}
};
int main()
{
	car obj;
	try{
		obj.speedlimit();
			
	}
catch(overspeed s)
{
	cout<<s.what()<<endl;
	s.getspeed();
}

	return 0;
}