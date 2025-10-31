#include<iostream>
#include<stack>

using namespace std;

int main()
{
	stack<string>cars;
	string temp;
	cout<<"Enter the car names : "<<endl;
	
	for(int i=0;i<5;i++)
	{
		cin>>temp;
		cars.push(temp);
	}
	
	cars.pop();
	cars.pop();
	cars.pop();
	cars.pop();
	cars.pop();
	
	
	cout<<cars.top();//prints stack top element;
	cout<<cars.size();//prints size of the stack
	
	cout<<cars.empty();//prints 1 if stack is empty else 0
		
	
	
}
