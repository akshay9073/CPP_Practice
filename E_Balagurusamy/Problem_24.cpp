#include<iostream>

using namespace std;
int area(int);
int area(int,int);
int main()
{
	int side,l,b;
	cout<<"enter the side of square : "<<endl;
	cin>>side;
	cout<<"Area is : "<<area(side)<<endl;
	
	cout<<"Enter the length and breadth of the rectangle : "<<endl;
	cin>>l>>b;
	cout<<"Area of rectangle : "<<area(l,b)<<endl;
	
	return 0;	
}

int area(int side)
{
	return side*side;
}

int area(int l,int b)
{
	return l*b;
}


