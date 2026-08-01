#include<iostream>

using namespace std;

int main()
{
	int a,b;
	cout<<"Enter the two numbers : "<<endl;
	cin>>a>>b;
	cout<<"a : "<<a<<" b : "<<b<<endl;
	swap(a,b);
	cout<<"Swap function : "<<endl;
	cout<<"a : "<<a<<" b : "<<b<<endl;
	
	return 0;
	
}

void swap(int &a,int &b)
{
	int temp=a;
	a=b;
	b=temp;	
}
