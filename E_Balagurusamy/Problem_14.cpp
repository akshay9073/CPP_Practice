#include<iostream>

using namespace std;

int main()
{
	int *p=new int;
	
	*p=25;
	
	cout<<"Pointer in cpp : "<<*p<<endl;
	
	int *q=new int(10);
	
	cout<<"Pointer in cpp : "<<*q<<endl;
	
	delete p;
	delete q;
	return 0;
}
