#include<iostream>

#include<array>

using namespace std;

int main()
{
	array<int,5> myIntArray;
	
	cout<<"Enter the data for Array : "<<endl;
	for(int i=0;i<5;i++)
	cin>>myIntArray[i];
	
	for(int i=0;i<5;i++)
	cout<<myIntArray[i]<<"\t";
	
	cout<<"Size of Array is : "<<myIntArray.size()<<endl;//size of Array is 5 using size() function.
	
	return 0;
}
