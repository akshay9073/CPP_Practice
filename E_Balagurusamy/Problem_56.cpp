#include<iostream>

using namespace std;


class B
{
	int a;
	public:
		int b;
		void show_a();
		void get_ab();
		int get_a(void);
};

class D:private B
{
	int c;
	public:
		void mul(void);
		void display();		
};

void B::get_ab()
{
	cout<<"Enter the value of a and b : "<<endl;
	cin>>a>>b;
}

int B::get_a()
{
	return a;
}

void B::show_a()
{
	cout<<"a is : "<<a<<endl;
}

void D::mul()
{
	get_ab();
	c=b*get_a();
}

void D::display()
{
	show_a();
	cout<<" b = "<<b<<"\n"
	<<" c = "<<c<<endl;
}

int main()
{
	D d;
	
//	d.get_ab(); 
	
	d.mul();
	
//	d.show_a();
	
	d.display();
	
//	d.b=10;
	
	d.mul();
	
	d.display();
	
	return 0;
	
	
}
