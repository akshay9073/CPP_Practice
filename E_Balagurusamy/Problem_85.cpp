#include<iostream>

using namespace std;

void divide(double x, double y)
{
	cout<<"Inside function "<<endl;
	try
	{
		if(y==0.0)
		throw y;
		else
		cout<<" Division = "<<x/y<<" \n";
	}
	catch(double)
	{
		cout<<" Caught double inside function"<<endl;
		throw;
	}
	cout<<" End of the function"<<endl;
}


int main()
{
	cout<<" Inside main "<<endl;
	try
	{
		divide(10.5,2.0);
		divide(20.0,0.0);
		
	}
	catch(double)
	{
		cout<<" Caught double inside main"<<endl;
	}
	
	cout<<" End of main function"<<endl;
}
