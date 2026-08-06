#include<iostream>

using namespace std;

class student
{
	string name;
	int age;
	public:
		student(){}
		student(string n,int a)
		{
			name=n;
			age=a;
		}
		
		void display()
		{
			cout<<"Name : "<<name<<", Age "<<age<<endl;
		}
};

int main()
{
	string inputname;
	int age;
	cout<<"Enter the name : "<<endl;
	cin>>inputname;
	
	cout<<"Enter the age : "<<endl;
	cin>>age;
	
	student s1(inputname,age);
	s1.display();
}
