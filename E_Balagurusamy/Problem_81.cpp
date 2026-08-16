#include<iostream>

using namespace std;

int main()
{
	int a,b;
	
	cout<<" Enter the value of a & b : "<<endl;
	cin>>a>>b;
	
	int x=a-b;
	
	try
	{
		if(x!=0)
		{
			cout<<" Result (a/x) : "<<a/x<<" \n";
		}
		else
		{
			throw(x);
		}
		
	}
	catch(int x)
	{
		cout<<" Exception Caught : DIVIDE by Zero "<<endl;
	}
	
	return 0;
}
