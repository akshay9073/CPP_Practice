#include<iostream>

using namespace std;

int main()
{
	int a=10;
	int *ptr;
	
	ptr=&a;
	cout<<"The value of a is : "<<*ptr<<endl;
	
	*ptr=*ptr*20;
	
	cout<<" The value of a is : "<<a<<endl;
	
	*ptr=*ptr-20;
	
	cout<<" the value of a is : "<<*ptr<<endl;
	
	*ptr=*ptr/2;
	
	cout<<" the value of a is : "<<*ptr<<endl;
	
	*ptr=*ptr%9;
	
	cout<<" the value of a is : "<<*ptr<<endl;
	
	return 0;
}
