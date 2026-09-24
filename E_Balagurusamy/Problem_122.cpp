#include<iostream>
#include<thread>
#include<mutex>
#include<chrono>

using namespace std;

mutex m1;
mutex m2;

void function1()
{
	while(true)
	{
		m1.lock();
		
//		this_thread::sleep_for(chrono::milliseconds(100));
		if(m2.try_lock())
		{
			cout<<" Thread 1: accquired both the locks "<<endl;
			
			m2.unlock();
			m1.unlock();
			break;
		}
		
		cout<<" Thread 1 : couldn't get mtx2, relasing mtx1"<<endl;
		
		m1.unlock();
		
		this_thread::sleep_for(chrono::milliseconds(100));
	}
}


void function2()
{
	while(true)
	{
		m2.lock();
//		this_thread::sleep_for(chrono::milliseconds(100));
		
		if(m1.try_lock())
		{
			cout<<" Thread 2 : accquired both the locks "<<endl;
			
			m1.unlock();
			m2.unlock();
			
			break;
		}
		
		cout<<" Thread 2 : couldn't accquire lock, relasing m2"<<endl;
		
		m2.unlock();
		
		this_thread::sleep_for(chrono::milliseconds(100));
	}
}


int main()
{
	thread t1(function1);
	thread t2(function2);
	
	t1.join();
	t2.join();
	
	return 0;
}
