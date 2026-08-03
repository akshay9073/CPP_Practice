#include<iostream>

using namespace std;
int power(double,int n=2);
int main()
{
	double m;
	int n;
	
	cout<<"enter the value for m : ";
	cin>>m;
	cout<<"enter the power to calculate : ";
	cin>>n;
	cout<<"Power is : "<<power(m,n)<<endl;
	
	cout<<"Square of m is : "<<power(m);
	
	return 0;
	
}

int power(double m,int n)
{
	int ans=1;
	for(int i=1;i<=n;i++)
	ans*=m;
	
	return ans;
}
