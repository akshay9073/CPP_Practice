#include<iostream>
#include<thread>

using namespace std;

void multiplication(int x,int y)
{
	cout<<" Multiplication of x "<<" * y : "<<x*y<<endl;
}

void addition(int x,int y)
{
	cout<<" Addition of x "<<" + y"<<x+y<<endl;
}


int main()
{
	int x,y;
	cout<<"Enter the two inputs : "<<endl;
	
	cin>>x>>y;
	thread t1(addition,x,y);
	thread t2(multiplication,x,y);
	
	cout<<" Testing join before"<<endl;
	t1.join();
	cout<<" Testing join after"<<endl;
	t2.join();
	
	return 0;
}
