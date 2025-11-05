#include<iostream>
#define PI 3.14

using namespace std;

int add(int,int);
float pi();

int main()
{
	int a,b;
	cout<<"Enter two Numbers (integers): "<<endl;
	cin>>a>>b;
	
	cout<<a<<" + "<<b<<" ="<<add(a,b);
	cout<<"\nValue of PI is : "<<pi();
	
	return 0;
}

int add(int x,int y)
{
	return x+y;
}

float pi()
{
	return PI;
}
