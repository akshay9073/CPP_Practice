#include<iostream>
using namespace std;

void countDownFrom(int num);

int main()
{
	countDownFrom(10);
}

void countDownFrom(int num)
{
	if(num>=0)
	cout<<num<<endl;
	countDownFrom(num-1);
}
