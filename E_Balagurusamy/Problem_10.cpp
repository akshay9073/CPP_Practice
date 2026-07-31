#include<iostream>
using namespace std;
int main()
{
	cout<<"Enter temperature in farhrenheit : "<<endl;
	
	float temp;
	cin>>temp;
	
	cout<<"Temperature in celsius is : "
	<<(temp - 32) * 5/9<<endl;
	
	return 0;
	
}
