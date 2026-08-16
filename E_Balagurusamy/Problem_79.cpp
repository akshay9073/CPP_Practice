#include<iostream>

using namespace std;
int fact(int);
int main()
{
	
	int (*funptr)(int);
	int num;
	
	cout<<" Enter a number : "<<endl;
	cin>>num;
	
	funptr=&fact;
	
	cout<<" factorial of "<<num <<" is : "<<funptr(num)<<endl;
	
	return 0;
}

int fact(int num)
{
	if(num==1)
	return 1;
	else
	return (num*fact(num-1));
}
