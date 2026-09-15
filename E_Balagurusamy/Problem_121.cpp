#include<iostream>
#include<mutex>
#include<thread>
#include<chrono>

using namespace std;

mutex m1;
mutex m2;

void function1()
{
	cout<<" Thread 1 : Locking mutex-1"<<endl;
	m1.lock();
	
	this_thread::sleep_for(chrono::milliseconds(100));
	
	cout<<" Thread 1 : Trying to lock mutex-2"<<endl;
	m2.lock();
	
	cout<<" Thread 1 : Got both the locks "<<endl;
	
	m2.unlock();
	m1.unlock();

}

void function2()
{
	cout<<" Thread 2 : Locking mutex-2"<<endl;
	m1.lock();
	
	this_thread::sleep_for(chrono::milliseconds(100));
	
	cout<<" Thread 2 : Trying to lock mutex1 "<<endl;
	m2.lock();
	
	cout<<" Thread 2 : got both the locks "<<endl;
	
	m2.unlock();
	m1.unlock();
}

int main()
{
	thread t1(function1);
	thread t2(function2);
	
	t1.join();
	t2.join();
	
	return 0;
}
