#include<iostream>

using namespace std;

int main()
{
	int *p=new int;
	
	*p=25;
	
	cout<<"Pointer in cpp : "<<*p<<endl;
	
	int *q=new int(10);
	
	cout<<"Pointer in cpp : "<<*q<<endl;
	
	int *arr;
	int size;
	
	cout<<"Enter the size of array : "<<endl;
	
	cin>>size;
	
	arr=new int[size];
	cout<<"Dynamic allocation of memory for array : "<<endl;
	arr[0]=2;
	
	delete arr;
	
	cout<<"Array element is : "<<arr[0]<<endl;
	
	delete p;
	delete q;
	return 0;
}
