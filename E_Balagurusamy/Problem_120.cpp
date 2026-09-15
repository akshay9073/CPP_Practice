#include<iostream>
#include<thread>
#include<mutex>
#include<chrono>

using namespace std;

mutex m1;
mutex m2;

void function1()
{
	cout<<"Thread 1 : locking mutex "<<endl;
	m1.lock();
	
	this_thread::sleep_for(chrono::milliseconds(100));
	
	cout<<" Thread 1 : Tring to lock mtx2 "<<endl;
	m2.lock();
	
	cout<<" Thread 1 : Got both locks "<<endl;
	
	m2.unlock();
	m1.unlock();
}

void function2()
{
	cout<<" Thread 2 : locking mutex "<<endl;
	m2.lock();
	
	this_thread::sleep_for(chrono::milliseconds(100));
	
	cout<<" Thread 2 : trying to lock mutex 1"<<endl;
	m1.lock();
	
	cout<<"Thread 2 : Got both locks "<<endl;
	
	m1.unlock();
	m2.unlock();
}

int main()
{
	
	thread t1(function1);
	thread t2(function2);
	
	t1.join();
	t2.join();
	
	return 0;
	
}
