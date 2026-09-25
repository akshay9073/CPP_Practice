#include<iostream>
#include<mutex>
#include<thread>
#include<atomic>

using namespace std;

atomic_flag spinlock=ATOMIC_FLAG_INIT;

void lock()
{
	while(spinlock.test_and_set())
	{
		cout<<" Waiting for lock "<<endl;
	}
}

void unlock()
{
	spinlock.clear();
}

void work(int i)
{
	lock();
	
	cout<<" Thread "<< i <<" accquired lock "<<endl;
	
	this_thread::sleep_for(chrono::seconds(3));
	
	cout<<" Thread "<< i <<" released lock "<<endl;
	
	unlock();
}


int main()
{
	thread t1(work,1);
	
	this_thread::sleep_for(chrono::seconds(1));
	
	thread t2(work,2);
	
	t1.join();
	t2.join();
	
	return 0;
}
