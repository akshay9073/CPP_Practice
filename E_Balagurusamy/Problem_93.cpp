#include<iostream>
#include<cstring>
using namespace std;

template<typename T1, typename T2>
void display(T1 x, T2 y)
{
	cout<<"Employee name : "<<x
	<<" \t Employee ID : "<<y<<endl;
}

int main()
{
	cout<<"Enter the employee name and employee ID : "<<endl;
	int epid;
	string str;
	
	cin>>str>>epid;
	
	display(str, epid);	
	
	return 0;
}
