#include<iostream>

using namespace std;
int fun(int);

int main(int argc,char *argv)
{
	int num;
	cout<<"Enter the num : "<<endl;
	cin>>num;
	
	cout<<"Value of Num in main (before function call): "<<num<<endl;//pass by value
	fun(num);
	cout<<"Value of Num in main (after function call): "<<num<<endl;//pass by value
	
	return 0;
}

int fun(int somevalue)
{
	somevalue=100;
	cout<<"Value of num in fun : "<<somevalue<<endl;
}
