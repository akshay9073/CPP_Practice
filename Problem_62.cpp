#include<iostream>
using namespace std;

void noConst();


int main()
{
	noConst();
	
}

void noConst()
{
	int *myPtr =new int(20);
	
	cout<<"In No Const"<<endl;
	cout<<"\nOriginal value : "<<*myPtr<<endl;
	
	*myPtr=200;
	cout<<"\nChanged data : "<<*myPtr<<endl;
	
	delete myPtr;
	
	myPtr= new int(300);
	cout<<"\nEntirely new pointer : "<<*myPtr<<endl;
}
