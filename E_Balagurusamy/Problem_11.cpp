#include<iostream>

#define PI 3.14

using namespace std;

	enum shape
	{
		circle, rectangle, triangle, square
	};
	
class area
{
	public :
		float aoc(float r);
		float aor(float l, float b);
		float aot(float b,float h);
		float aos(float s);
		
};	

float area::aoc(float r)
{
	return 3.14*r*r;
}
	
float area::aor(float l,float b)
{
	return 2*l*b;
}

float area::aot(float b, float h)
{
	return 0.5*b*h;
}

float area::aos(float side)
{
	return side*side;
}

int main()
{
	
	int code=-1;
		
	
	while(1)
	{
		cout<<"0: Circle "<<endl;
		cout<<"1: Rectangle"<<endl;
		cout<<"2: Triangle"<<endl;
		cout<<"3: Square"<<endl;
		
		cout<<"Enter the shape-code : "<<endl;
		cin>>code;
		area a;
		switch(code)
		{
			case circle:
				float r;
				cout<<"Enter radius of circle : "<<endl;
				cin>>r;
				cout<<"Area of circle : "<<a.aoc(r)<<endl;
				break;
				
			case rectangle:
				float l,b;
				cout<<"Enter lenght and breadth of rectangle : "<<endl;
				cin>>l>>b;
				cout<<"Area of rectangle : "<<a.aor(l,b)<<endl;
				break;
				
			case triangle:
				float base,h;
				cout<<"Enter the base and height : "<<endl;
				cin>>base>>h;
				cout<<"Area of triangle : "<<a.aot(base,h)<<endl;
				break;
				
			case square :
				float side;
				cout<<"Enter the side of square : "<<endl;
				cin>>side;
				cout<<"Area of square : "<<a.aos(side)<<endl;
				break;	
				
		}
	}
	
}
