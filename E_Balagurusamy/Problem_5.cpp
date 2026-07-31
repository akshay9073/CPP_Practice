#include<iostream>

using namespace std;

class person
{
	char name[20];
	int age;
	
	public :
		void get_data();
		void display();
};

void person::get_data()
{
	cout<<"Enter the name : "<<endl;
	cin>>name;
	cout<<"Enter the age : "<<endl;
	cin>>age;
}

void person::display()
{
	cout<<"name : "<<name<<"\t"
	<<"age : "<<age<<endl;
}

int main()
{
	person p;
	cout<<"Enter the Person Data : "<<endl;
	p.get_data();
	p.display();
	
	return 0;
	
}
