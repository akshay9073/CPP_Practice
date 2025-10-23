#include<iostream>

using namespace std;

int main()
{
	int num;
	cout<<"Enter the number : "<<endl;
	cin>>num;
	int sum=0;
	while(num>=0)
	{
		sum+=num;
		cout<<"Enter the number : ";
		cin>>num;
	}
	
	cout<<"Sum is : "<<sum<<endl;
	
	return 0;
}
