#include<iostream>
#include<thread>
#include<chrono>

using namespace std;

void Add50number()
{
	int add50=0;
	for(int i=0;i<51;i++)
	{
		add50=add50+i;
	}
	cout<<" Addition of 50 numbers : "<<add50<<endl;
}

void Add100number()
{
	int add100=0;
	for(int i=0;i<100;i++)
	{
		add100+=100;
	}
	
	cout<<" Addition of 100 numbers : "<<add100<<endl;
}

int main()
{
	chrono::time_point<chrono::system_clock> start_time,end_time;
	
	start_time=chrono::system_clock::now();
	Add50number();
	Add100number();
	end_time=chrono::system_clock::now();
	
	cout<<" Time taken by sequensital execution: \t"<<(end_time-start_time).count()<<endl;
	
	start_time=chrono::system_clock::now();
	thread t1(Add50number);
	thread t2(Add100number);
	
	t1.join();
	t2.join();
	
	end_time=chrono::system_clock::now();
	
	cout<<"Time taken by multithreading execution : \t"<<(end_time-start_time).count()<<endl;
	
	return 0;
}
