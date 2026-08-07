#include<iostream>

using namespace std;

class complex
{
	float x,y;
	public:
		complex(){}
		complex(float real,float imag)
		{
			x=real;
			y=imag;
		}
		void display(void);
		friend complex operator +(complex, complex);
		
	
};

complex operator +(complex c1,complex c2)
{
	return complex((c1.x+c2.x),(c1.y+c2.y));
}

void complex::display()
{
	cout<<x<<" + "<<" j "<<y<<endl;
}

int main()
{
	
complex c1,c2;
	
	c1=complex(2.5,3.5);
	c2=complex(1.6,2.7);
	
	complex c3;
	c3=operator +(c1,c2);
	
	cout<<"C1 = ";c1.display();
	cout<<"C2 = ";c2.display();
	cout<<"C3 = ";c3.display();
	
}
