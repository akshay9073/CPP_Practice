#include<iostream>

using namespace std;

int add(int x,int y)
{
	return x+y;
}

int multiply(int x, int y)
{
	return x*y;
}

int main()
{
	int (*operationptr)(int,int);
	
	operationptr=add;
	
	cout<<" 10 + 5 = "<<operationptr(10,5)<<endl;
	
	operationptr=multiply;
	
	cout<<" 10 * 5 = "<<operationptr(10,5)<<endl;
	
	return 0;
	
}
