#include<iostream>
#include<thread>
#include<chrono>
#include<mutex>

using namespace std;

int balance=0;

mutex mtx;

void deposit(int amount)
{
	mtx.lock();
	int temp=balance;
	
	this_thread::sleep_for(chrono::milliseconds(100));
	
	temp+=amount;
	balance=temp;
	mtx.unlock();
	
}

int main()
{
	
//	cout<<" Deposit amount in back account : "<<endl;
	int amount1=100;
	int amount2=200;
	
	
//	cout<<" Enter the amount : "<<endl;
//	cin>>amount;
	
	thread t1(deposit, amount1);
	
//	cout<<"Enter the amount : "<<endl;
//	cin>>amount;

	thread t2(deposit,amount2);
	
	t1.join();
	t2.join();
	
	cout<<" Amount in account is : "<<balance<<endl;
	
	return 0;
	
	
}
