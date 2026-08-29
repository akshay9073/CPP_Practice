#include<iostream>

using namespace std;

template<typename T>
void bubble(T a[], int n)
{
	for(int i=0;i<n;i++)
	{
		for(int j=n-1;i<j;j--)
		{
			if(a[j]<a[j-1])
			{
				swap(a[j],a[j-1]);
			}
		}
	}
}

template<typename T>
void myswap(T &x, T &y)
{
	T temp=x;
	x=y;
	y=temp;
}

int main()
{
	int size;
	cout<<" Enter the size of array : "<<endl;
	cin>>size;
	
	int arr[size];
	
	cout<<"enter the array elements : "<<endl;
	for(int i=0;i<size;i++)
	cin>>arr[i];
	
	cout<<"Display Array Before Sort : "<<endl;
	for(int i=0;i<size;i++)
	cout<<arr[i]<<"\t";
	
	bubble(arr,size);
	
	cout<<"\nDisplay Array after sort : "<<endl;
	for(int i=0;i<size;i++)
	cout<<arr[i]<<" \t";
	
	return 0;
}
