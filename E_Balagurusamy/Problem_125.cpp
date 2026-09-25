#include<iostream>
#include<thread>
#include<mutex>

using namespace std;

recursive_mutex rmtx;

void func(int n)
{
	if(n<=0)
	return;
	
	rmtx.lock();
	cout<<" Level : "<<n<<endl;
	
	func(n-1);
	rmtx.unlock();
}

int main()
{
	thread t1(func,3);
	t1.join();
	
	return 0;
}
