#include<iostream>

using namespace std;

int main()
{
	const int arraysize=5;
	int array[arraysize];
	
	cout<<"Enter the values for the array : "<<endl;
	
	for(int i=0;i<arraysize;i++)
	cin>>array[i];
	
	cout<<"Array is : "<<endl;
	for(int i=0;i<arraysize;i++)
	cout<<array[i]<<"\t";
	
	return 0;
	
}
