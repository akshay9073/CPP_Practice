#include <iostream>

using namespace std;

int main()
{
	int myInt=10; //copy initialization
	
	int y(10); //direct initialization
	
	int z{10}; //uniform (brace) initialization
	
	
	cout<<"myInt"<<myInt<<endl;
	cout<<"y : "<<y<<endl;
	cout<<"z : "<<z<<endl;
	
	return 0;
}
