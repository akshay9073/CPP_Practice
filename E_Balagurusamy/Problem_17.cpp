#include<iostream>

using namespace std;

int main()
{
	int size;
	cout<<"Enter the size of pyramid : "<<endl;
	cin>>size;
	
	cout<<endl;
	for(int i=1;i<=size;i++)
	{
		for(int j=0;j<i;j++)
		cout<<i;
		
		cout<<endl;
	}
	return 0;
}
