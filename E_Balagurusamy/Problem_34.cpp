#include<iostream>

using namespace std;


class employee
{
	char name[20];
	float age;
	
	public:
		void getdata();
		void showdata();
};

void employee::getdata()
{
	cout<<"\nEnter the employee name : "<<endl;
	cin>>name;
	cout<<"\nEnter the name of age : "<<endl;
	cin>>age;
}

void employee::showdata()
{
	cout<<"\nEmployee Data : "<<endl;
	cout<<"Name : "<<name<<endl;
	cout<<"Age : "<<age<<endl;
}



int main()
{
	employee e[5];
	
	cout<<"\nEnter the Employee Details : "<<endl;
	
	for(int i=0;i<5;i++)
	e[i].getdata();
	
	for(int i=0;i<5;i++)
	e[i].showdata();
	
	return 0;
}
