#include<iostream>

using namespace std;

class shape
{
	public:
		virtual void drawing()=0;
};

class circle:public shape
{
	public:
	void drawing()
	{
		cout<<" Drawing circle "<<endl;
	}
};

int main()
{
	shape *s= new circle();
	
	s->drawing();
	
	circle c;
	c.drawing();
	
	
}
