#include<iostream>

using namespace std;

int main()
{
	int *myIntPtr=new int(123);
	
	cout<<*myIntPtr<<endl;
	
	delete myIntPtr;
	myIntPtr=nullptr;
	
	return 0;
}
