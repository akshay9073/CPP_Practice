#include<iostream>

using namespace std;

class Point
{
	int x,y;
	public:
		Point(int a, int b)
		{
			x=a;
			y=b;
		}
		
		void display()
		{
			cout<<"("<<x<<", "<<y<<")"<<endl;
		}

	
};


int main()
{
	Point p1=Point(20,10);
	Point p2=Point(10,5);
	
	cout<<"Point p1 = ";
	p1.display();
	cout<<"Point p2 = ";
	p2.display();
	
	return 0;
	
}
