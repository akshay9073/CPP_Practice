#include<iostream>
#include<cstdarg>
using namespace std;
void do_something(int count,...);
int main()
{
	int a,b,c;
	cout<<"Enter the numbers : "<<endl;
	cin>>a>>b>>c;
	do_something(3,a,b,c);
	
}

void do_something(int count, ...)
{
	va_list args;
	va_start(args,count);
	
	int sum=0;
	for(int i=0;i<count;i++)
	sum+=va_arg(args,int);
	
	
	cout<<"Sum : "sum<<endl;
}
