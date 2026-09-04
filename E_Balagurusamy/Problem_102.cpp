#include<iostream>
#include<queue>

using namespace std;

int main()
{
	queue<int> num;
	
	num.push(1);
	num.push(2);
	num.push(3);
	num.push(4);
	
	cout<<num.front()<<endl;
	cout<<num.back()<<endl;
	
	cout<<num.size()<<endl;
	cout<<num.empty()<<endl;
	num.pop();
	cout<<num.size()<<endl;
	
	return 0;
}
