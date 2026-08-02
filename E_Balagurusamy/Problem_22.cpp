#include<iostream>

using namespace std;
void print_number(int);
int main()
{
	int a;
	cout<<"Enter a number : "<<endl;
	cin>>a;
	print_number(a);
	
	return 0;
}

void print_number(const int a)
{
//	a=10;
	cout<<"Number is : "<<a<<endl;
}
