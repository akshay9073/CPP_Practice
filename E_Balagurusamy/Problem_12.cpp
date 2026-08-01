#include<iostream>

using namespace std;

int main()
{
	float total;
	
	total =100;
	
	float &sum= total;
	
	cout<<"The sum is : "<<sum<<endl;
	
	sum=200;
	
	cout<<"The sum after modification is : "<<sum<<endl;
	
	return 0;
}
