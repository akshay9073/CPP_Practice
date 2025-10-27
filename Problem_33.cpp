#include<iostream>
#include<vector>
#include<array>
#include<iomanip>
using namespace std;

int main()
{
	const int NUM_DAYS=7;
	array<double,NUM_DAYS> temp;
	
	cout<<"\nEnter the Temperature for 7 days in Fahrenheit : "<<endl;
	for(int i=0;i<NUM_DAYS;i++)
	{
		cout<<"Enter the temp for "<<i+1<<" day :"<<endl;
		cin>>temp[i];
	}
	
	cout<<"\nHere are the temperatures converted to Celsius : "<<endl;
	double tempC;
	cout<<setprecision(3)<<tempC;
	for(double tempF:temp)
	{
		tempC=(tempF-32)*5.0/9;
		cout<<"F :"<<tempF<<" "<<"---> C "<<tempC<<endl;
	}
	
	return 0;
}
