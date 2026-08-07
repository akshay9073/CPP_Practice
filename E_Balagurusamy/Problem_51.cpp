#include<iostream>

using namespace std;

class space
{
	int x,y,z;
	public:
		void set_data(int , int ,int);
		void display(void);
		void operator -();
};

void space::set_data(int a, int b, int c)
{
	x=a;
	y=b;
	z=c;
}

void space::display()
{
	cout<<"x = "<<x<<" ";
	cout<<"y = "<<y<<" ";
	cout<<"z = "<<z<<" ";
}

void space::operator -()
{
	x=-x;
	y=-y;
	z=-z;
}

int main()
{
	space s;
	s.set_data(10,20,-30);
	s.display();
	
	-s;
	cout<<"\n-s "<<endl;
	s.display();
	
}
