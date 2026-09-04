#include<iostream>

#include <deque>
using namespace std;
int main()
{
	deque<int> num;
	
	num.push_back(10);
	num.push_back(20);
	num.push_back(30);
	num.push_back(40);
	
	cout<<num[1]<<endl;
	cout<<num[0]<<endl;
	
	num[0]=100;
	num[1]=200;
	
	for(int i=0;i<num.size();i++)
	cout<<num.at(i)<<endl;
	
	cout<<num.empty();
	cout<<num.front();
	cout<<num.back();
	
	return 0;
}
