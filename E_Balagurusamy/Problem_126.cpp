#include<iostream>
#include<thread>
#include<mutex>

using namespace std;
timed_mutex t_mutex;

void worker(int id)
{
	
	if(t_mutex.try_lock_for(chrono::milliseconds(300)))
	{
		cout<<" Thread "<<id<<" accquired the lock"<<endl;
		
		this_thread::sleep_for(chrono::milliseconds(500));
		
		t_mutex.unlock();
		
		cout<<" Thread "<<id <<" released the lock"<<endl;
	}
	else
	{
		cout<<" Thread "<<id<<" timed out waiting for the lock"<<endl;
	}
}

int main()
{
	thread t1(worker,1);
	
//	this_thread::sleep_for(chrono::milliseconds(100));
	
	thread t2(worker,2);
	
	t1.join();
	t2.join();
	
	return 0;
	
}
