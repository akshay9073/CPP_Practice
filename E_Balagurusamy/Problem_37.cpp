#include<iostream>

using namespace std;
class XYZ;
class ABC
{
	int data;
	public:
	void set_value(int x)
	{
		data=x;
	}
	friend void add(ABC,XYZ);
		
};

class XYZ
{
	int data;
	public:
		void set_value(int y)
		{
			data=y;
		}
	friend void add(ABC,XYZ);
};


void add(ABC obj1, XYZ obj2 )
{
	cout<<"Sum of data values of XYZ and ABC : "
	<<obj1.data+obj2.data;
}


int main()
{
	XYZ x;
	ABC a;
	
	x.set_value(5);
	a.set_value(10);
	
	add(a,x);
	
	return 0;
}
