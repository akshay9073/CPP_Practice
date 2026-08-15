#include<iostream>

using namespace std;

int main()
{
	int a, *ptr1, **ptr2;
	
	ptr1=&a;
	ptr2=&ptr1;
	
	a=10;
	cout<<" value of a is : "<<a<<endl;
	
	cout<<" value of ptr-1 is : "<<*ptr1<<endl;
	
	cout<<" address of a is : "<<ptr1<<endl;
	
	cout<<" address of ptr-1 is : "<<ptr2<<endl;
	
	cout<<" value of a (via ptr2) : "<<**ptr2<<endl;
	
	cout<<" address  of ptr2 : "<<&ptr2<<endl;
	
	return 0;
}
