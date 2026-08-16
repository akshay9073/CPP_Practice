#include<iostream>

using namespace std;

class A
{
	public:
		virtual ~A()
		{
			cout<<" Destructor in base class "<<endl;
		}
};

class B:public A
{
	public:
		~B()
		{
			cout<<" Destructor in derived class "<<endl;
		}
};


int main()
{
	A *ptr=new B();
	
	delete ptr;	
}
