#include<iostream>

using namespace std;

int main()
{
	int num[5]={1,2,3,4,5};
	
	int *ptr;
	
	int i;
	
	cout<<" The array values are : "<<endl;
	for(i=0;i<5;i++)
	{
		cout<<num[i]<<endl;
	}
	
	ptr=num;
	
	cout<<" The value of ptr is : "<<*ptr<<endl;
	
	ptr++;
	cout<<" The value of ptr++ is : "<<*ptr<<endl;
	
	ptr--;
	cout<<" The value of ptr-- is : "<<*ptr<<endl;
	
	ptr=ptr+2;
	cout<<" The value of ptr+2 is : "<<*ptr<<endl;
	
	ptr=ptr-1;
	cout<<" The value of ptr-1 is : "<<*ptr<<endl;
	
	ptr+=3;
	cout<<" The value of ptr+=3 is : "<<*ptr<<endl;
	
	ptr-=2;
	cout<<" The value of ptr-=2 is : "<<*ptr<<endl;
	
	return 0;
}
