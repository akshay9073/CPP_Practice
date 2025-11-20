#include<iostream>
using namespace std;
int main()
{
	
	bool *myBoolPtr= new bool;
	*myBoolPtr=true;
	
	cout<<boolalpha;
	
	cout<<*myBoolPtr<<endl;
	
	delete myBoolPtr;
	myBoolPtr=nullptr;
}
