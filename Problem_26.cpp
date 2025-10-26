#include<iostream>
#include<vector>
using namespace std;

int main()
{
	vector<int> arr;
	
	cout<<"Enter the data : "<<endl;
	int a;
	for(int i=0;i<5;i++)
	{
		cin>>a;
		arr.push_back(a);
	}
	
	cout<<"\nArray Elements : "<<endl;
	for(int i=0;i<5;i++)
	cout<<arr[i]<<endl;
	
	return 0;
}
