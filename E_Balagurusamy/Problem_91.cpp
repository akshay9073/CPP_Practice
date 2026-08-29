#include<iostream>
#include<cstring>
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

template<typename T>
void display(T a[],int n)
{
	for(int i=0;i<n;i++)
	cout<<a[i]<<"\t";
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
	display(arr,size);
	
	bubble(arr,size);
	
	cout<<"\nDisplay Array after sort : "<<endl;
	display(arr,size);
	
	char str[]="Akshay";
	bubble(str,strlen(str));
	
	cout<<"\nString before sort : "<<str<<endl;
	bubble(str,strlen(str));
	cout<<"\nString after sort  : "<<str<<endl;
	
	float farr[5]={11.4,112.4,3.5,2.6,4.6};
	cout<<"\nfloat Before sorting : ";
	display(farr,5);
	bubble(farr,5);
	cout<<"\nfloat after sorting : ";
	display(farr,5);
	
	return 0;
}
