#include<iostream>
using namespace std;

void noConst();
void cp2ncd();

int main()
{
	noConst();
	cp2ncd();
	
	return 0;
	
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

void cp2ncd()
{
	cout<<"In cp2ncd"<<endl;
	 int *const myPtr =new int(200);
	 
	 cout<<"\nOriginal value : "<<*myPtr<<endl;
	 
	 *myPtr=400;
	 cout<<"\nModified value : "<<*myPtr<<endl;
	 
//	 myPtr=new int(100);
	 
	 delete myPtr;
}

void ncp2cd ()
{
	cout<<"In ncp2cd"<<endl;
	
	const int *myPtr= new int(100);
	
	cout<<"\nOriginal value : "<<*myPtr<<endl;
	
//	*myPtr=500;
//	cout<<"\nModified value : "<<*myPtr<<endl;

	
	delete myPtr;
	
	myPtr=new int(200);
	
	cout<<"\nNew value is : "<<*myPtr<<endl;
}
