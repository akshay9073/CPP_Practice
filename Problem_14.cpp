#include<iostream>

using namespace std;

int main()
{
	char gender;
	int age;
	
	cout<<"Welcome to Re-tired Women's Club Discount Checker!!"<<endl;
	
	cout<<"Enter the Gender : "<<endl;
	cin>>gender;
	
	cout<<"Enter the age : "<<endl;
	cin>>age;
	
	cin.get();
	
	if((gender=='f' || gender =='F') && age>=60)
	cout<<"Eligible"<<endl;
	else
	cout<<"Not Eligible"<<endl;
	
	return 0;
	
}
