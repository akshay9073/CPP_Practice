#include<iostream>
#include<array>
#include<tuple>
using namespace std;

int main()
{
	array<int,6> arr;
	
	for(int i=0;i<arr.size();i++)
	{
		cout<<"\nEnter the array element "<<i+1<<"\t";
		cin>>arr[i];
	}
	
	int i=0;
	cout<<"\nArray Element are : (using at())"<<endl;
	while(i<arr.size())
	{
		cout<<arr.at(i)<<"\t";
		i++;
	}
	
	cout<<"\nArray Element are : (using get())"<<endl;
		cout<<get<0>(arr)<<"\t";
		cout<<get<1>(arr)<<"\t";
		cout<<get<2>(arr)<<"\t";
}
