#include<iostream>
using namespace std;

int main()
{
	int age;
	cout<<"Enter your Age : "<<endl;
	cin>>age;
	
	cout<<"Age is : "<<age<<endl;
	
	string fullName;
	cin.get();
	cout<<"Enter Full Name : "<<endl;
	getline(cin,fullName);
	cout<<"Full Name is : "<<fullName<<endl;
	
	return 0;
}
