#include<iostream>

using namespace std;

int sum(int);

int main()
{
	int num;
	cout<<"Enter the number to find sum: "<<endl;
	cin>>num;
	cout<<"sum of n natural numbers : "<<sum(num)<<endl;	
}

int sum(int num)
{
	if(num>1)
	return (num+sum(num-1));
	else
	return num;
}
