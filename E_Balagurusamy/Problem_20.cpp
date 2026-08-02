#include<iostream>

using namespace std;

inline int mul(int a, int b)
{
	return a*b;
}

inline int square(int a)
{
	return a*a;
}

int main()
{
	
	cout<<"Enter the numbers a & b : "<<endl;
	int a,b;
	cin>>a>>b;
	
	cout<<" a*b = "<<mul(a,b)<<endl;
	
	cout<<"Enter the number : "<<endl;
	int num;
	cin>>num;
	
	cout<<"Square of " <<num<<" :"<<square(num)<<endl;
	
	return 0;
	
}


