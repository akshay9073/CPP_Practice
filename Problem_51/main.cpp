#include<iostream>
#include "Triangle.h"

using namespace std;
void printTriangleData(Triangle t);
int main()
{
	Triangle t1;
	Triangle t2(3,4,5);
	Triangle t3(1,2,3);
	
	printTriangleData(t1);
	printTriangleData(t2);
	printTriangleData(t3);
	
}

void printTriangleData(Triangle t)
{
	cout<<"Sides are : "
	<<t.getSideA()<<" ,"
	<<t.getSideB()<<" ,"
	<<t.getSideC()<<" ,"<<endl;
	
	if(t.isValid())
	{
		cout<<"\tPerimeter : "<<t.perimeter()<<endl;
		cout<<"\tArea : "<<t.area()<<endl;
	}
	else
	{
		cout<<"\tThis is not a valid triangle "<<endl;
	}
	
	cout<<endl;
}
