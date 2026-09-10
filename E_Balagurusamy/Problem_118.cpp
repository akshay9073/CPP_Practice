#include<iostream>
#include<thread>
using namespace std;

int shared_variable=0;

void function1()
{
	cout<<" Value printed : "<<shared_variable<<endl;
	shared_variable++;
}

int main()
{
	thread threads[5];
	
	for(int i=0;i<5;i++)
	{
		threads[i]=thread(function1);
	}
	
	for(int i=0;i<5;i++)
	{
		threads[i].join();
	}
	
	return 0;
}
