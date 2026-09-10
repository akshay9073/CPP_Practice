#include<iostream>
#include<thread>

using namespace std;

void function_1()
{
	cout<<" Function will execute on thread-1"<<endl;
}

void function_2()
{
	cout<<" Funtion will execute on thread-2"<<endl;
}

int main()
{
		
	thread t1(function_1);
	thread t2(function_2);
	
	t1.join();
	t2.join();
	
	return 0;
}
