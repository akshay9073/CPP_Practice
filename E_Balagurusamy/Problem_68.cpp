#include<iostream>

using namespace std;

int main()
{
	int arr[10]={1,5,20,30,80,56,89,100,15,30};
	
	int *ptr;
	
	ptr=arr;
	
	int num;
	cout<<"Enter the number to find  : "<<endl;
	cin>>num;
	
	for(int i=0;i<10;i++)
	{
		if(*ptr==num)
		{
			cout<<num<<" found in the array "<<endl;
			break;
		}
		else if(i==9)
			cout<<" The "<<num<<" not found in array "<<endl;
			ptr++;
		
	}
	
	return 0;
}
