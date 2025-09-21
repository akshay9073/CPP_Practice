#include<iostream>

using namespace std;

int main()
{
	int num;
	cout<<"Enter a number : "<<endl;
	cin>>num;
	
	int fact=1;
	for(int i=num;i>0;i--)
	fact*=i;
	
	cout<<"Factorial of "<<num<<" is "<<fact;
	
	return 0;
}
