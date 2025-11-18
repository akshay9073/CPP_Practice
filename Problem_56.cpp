#include<iostream>
#include<stdexcept>

using namespace std;

int main()
{
	try{
		
		try{
			throw out_of_range("out of range");
		}
//		cout<<"block"<<endl;
		catch(invalid_argument e)
		{
			cout<<"Exception caught : "<<e.what()<<endl;
		}
	
	}
	catch(out_of_range e)
	{
		cout<<"Exception caught : "<<e.what()<<endl;
	}
	return 0;
}
