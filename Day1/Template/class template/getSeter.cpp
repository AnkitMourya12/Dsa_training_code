//template class 
#include<iostream>
using namespace std;

template <class T>
class array{
	public:
		T arr;
		
	
		void set(T x)
		{
		arr=x;
		}
		void get()
		{
			cout<<"Data  is "<<arr<<endl;
		
		}
};
int main()
{
	array<int> obj;
	obj.set(66);
    obj.get();
    
    array<char> obj2;
    obj2.set('A');
    obj2.get();

	 return 0;
}