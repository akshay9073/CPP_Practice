#include<iostream>

using namespace std;

void print_sum(int a,int b=0,int c=0)
{
	cout<<(a+b+c)<<endl;
}

int main()
{
	print_sum(5);// b and c are default parameter with 0,0
	print_sum(5,10);//c is default parameter with 0
	print_sum(5,10,20);// all three are passed
	
	/*
	Thus we can achieve the same objective of function overloading by default arguments
	*/	
}
