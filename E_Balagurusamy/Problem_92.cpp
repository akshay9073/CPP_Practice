#include<iostream>

#define ARR_SIZE 5


using namespace std;

template<class T>
T find_min(T a[])
{
	T min=a[0];
	for(int i=0;i<ARR_SIZE;i++)
	{
		if(a[i]<min)
		min=a[i];
	}
	
	return min;
}

int main()
{
	int arr[ARR_SIZE];
	cout<<"Enter the array elements : "<<endl;
	
	for(int i=0;i<ARR_SIZE;i++)
	cin>>arr[i];
	
	cout<<"Minimum in array : "<<find_min(arr)<<endl;
	
	float farr[]={10.5,25.5,24.7,45.5,4.5};
	
	cout<<"Minimum in array : "<<find_min(farr)<<endl;
	
	char str[]={'z','a','b','c','/'};
	cout<<"Minimum in array : "<<find_min(str)<<endl;
	
	return 0;
}
