#include<iostream>

using namespace std;

int factorial(int);

int main()
{
	int num;
	cout<<"Enter the number to find factorial : "<<endl;
	cin>>num;
	cout<<"Factorial is : "<<factorial(num)<<endl;	
}

int factorial(int num)
{
	if(num>1)
	return (num*factorial(num-1));
	else
	return num;
}
