#include<iostream>
using namespace std;

int add(int,int);

int main()
{
	int a,b;
	cout<<"Enter two Numbers (integers): "<<endl;
	cin>>a>>b;
	
	cout<<a<<" + "<<b<<" ="<<add(a,b);
}

int add(int x,int y)
{
	return x+y;
}


