#include<iostream>

using namespace std;

void test(int x)
{
	
	try{
		
		if(x==1)
			throw x;
		else if(x==0)
				throw 'x';
		else
			throw 1.0;
			
			cout<<" End of the try block "<<endl;
	}
	catch(char x)
	{
		cout<<" Caught a character"<<endl;
	}
	catch(int x)
	{
		cout<<" Caught a integer"<<endl;
	}
	catch(double x)
	{
		cout<<" Caught a double"<<endl;
	}
	
	
}

int main()
{
	
	cout<<" Testing multiple catch : "<<endl;
	
	cout<<" x==1 "<<endl;
	test(1);
	
	cout<<" x==0 "<<endl;
	test(0);
	
	cout<<" x==-1 "<<endl;
	test(-1);
	
	return 0;
	
}
