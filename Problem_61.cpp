#include<iostream>

using namespace std;

int main()
{
	int n;
	
	cout<<"Enter the size of array : "<<endl;
	cin>>n;
	
	int *myArray= new int[n];
	
	for(int i=0;i<n;i++)
	myArray[i]=i*2;
	
	for(int i=0;i<n;i++)
	cout<<myArray[i]<<endl;
	
	delete [] myArray;
	
	
}
