#include<iostream>

using namespace std;

int main()
{
	int x=7;
	
	try{
		
		if(x%2!=0)
		throw -1;
	}
	catch(int e)
	{
		cout<<"\nException caught : "<<e<<endl;
	}
	
	return 0;
}
