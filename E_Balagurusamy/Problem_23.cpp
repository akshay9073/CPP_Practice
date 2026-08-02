#include<iostream>

using namespace std;
int fact (int);
int main()
{
	
	int num;
	cout<<"Enter a number : "<<endl;
	cin>>num;
	
	cout<<"The Factorial value is : "<<fact(num)<<endl;
	
	return 0;
}

int fact(int a)
{
	if(a==0)
	return 1;
	
	return (a*fact(a-1));
}
