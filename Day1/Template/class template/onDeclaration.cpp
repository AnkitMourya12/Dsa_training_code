//template class
#include<iostream>
using namespace std;

template<class T>
class A{
	public:
		T data;
		A(T data)
		{
			this->data= data;
			cout<<data<<" Mourya"<<endl;
		}
};

int main()
{
	A<string> obj("Name:Ankit");
	
	return 0;
}