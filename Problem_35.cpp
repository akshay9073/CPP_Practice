#include<iostream>
#include<array>

using namespace std;

int main()
{
	array<int,6> arr={1,2,3,4,5,6};
	
	cout<<"\nArray elements are : "<<endl;
	for(int i=0;i<arr.size();i++)
	cout<<arr[i]<<"\t";
	
	cout<<"\nFront element is : "<<arr.front()<<endl;
	cout<<"\nBack element is : "<<arr.back()<<endl;
	
	cout<<"\nFront element Before : "<<arr.front()<<endl;
	
	int &a=arr.front();
	a=10;
	cout<<"\nFront element After : "<<arr.front()<<endl;
	
	return 0;
}
