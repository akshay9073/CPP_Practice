#include<iostream>

using namespace std;

int global_number=10;

int& get_number()
{
	return global_number;
}

int main()
{
	cout<<"Original Number : "<<global_number<<endl;
	
	get_number()=50;
	
	cout<<"Modified value is : "<<global_number<<endl;
	
	//catch return as reference 
	int &reference=get_number();
	reference=100;
	
	cout<<"Final value is : "<<reference<<endl;
	
	
	
	return 0;
}
