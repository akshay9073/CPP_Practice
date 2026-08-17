#include<iostream>

using namespace std;

void test(int x) throw(int, double )
{
	if(x==0)
	throw 'x';
	else if(x==1)
	throw x;
	else if (x==-1) 
	throw 1.0;
	
	cout<<" End of function block "<<endl;
	
}


int main()
{
	try
	{
		cout<<" Testing Throw Restriction "<<endl;
		cout<<" x == 0 "<<endl;
		test(0);
		cout<<" x == 1 "<<endl;
		test(1);
		cout<<" x == -1 "<<endl;
		test(-1);
	}
	catch(char x)
	{
		cout<<" Caught a character "<<endl;
	}
	catch(int m)
	{
		cout<<" Caught an integer "<<endl;
	}
	catch(double d)
	{
		cout<<" Caught an double "<<endl;
	}
	cout<<" End of the main function "<<endl;
	
	return 0;
}
