#include<iostream>

using namespace std;

class M
{
	public:
		void display();
};

class N
{
	public:
		void display();
};

class P: public M, public N
{
	public:
		void display();
};

void M::display()
{
	cout<<" Class M "<<endl;
}

void N::display()
{
	cout<<" Class N "<<endl;
//	M::display();
}

void P::display()
{
	cout<<" Class P "<<endl;
	M::display();
}

int main()
{
	P p;
	p.display();
//	p.M::display();
}


