#include<iostream>

using namespace std;

class Base
{
	public:
		void display()
		{
			cout<<" Display in Base "<<endl;
		}
		virtual void show()
		{
			cout<<" Show Base "<<endl;
		}
		
};

class Derived:public Base
{
	public:
		void display()
		{
			cout<<" Display in Derived "<<endl;
		}
		void show()
		{
			cout<<" Show Derived "<<endl;
		}
};

int main()
{
	Base B;
	Derived D;
	
	Base *bptr;
	
	bptr=&B;
	
	cout<<" bptr points to base "<<endl;
	
	bptr->display();
	bptr->show();
	
	cout<<" bptr points to derived "<<endl;
	
	bptr=&D;
	
	bptr->display();
	bptr->show();
	
	return 0;
	
	return 0;
}
