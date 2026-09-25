#include<iostream>
#include<thread>
#include<mutex>

 using namespace std;
 
 mutex m;
 
 void work(int i)
 {
 	 m.lock();
	 cout<<" Thread "<< i <<" get lock"<<endl;
 	
	 this_thread::sleep_for(chrono::seconds(3));
 	
 	cout<<" Thread "<<i <<" releasing lock"<<endl;
 	
 	m.unlock();
 }
 
 
 int main()
 {
 	thread t1(work,1);
 	thread t2(work,2);
 	
 	t1.join();
 	t2.join();
 	
 	return 0;
 }
