#include<iostream>

#include<stdexcept>
using namespace std;
int main()
{
	try{
		
		int choice;
		cout<<"Enter the Choice : "<<endl;
		cin>>choice;
		
		if(choice==1)
		throw out_of_range("Out of Range");
		else if(choice ==2)
		throw invalid_argument("Invalid argument");
		else
		throw "unkown error";
		
	}
	catch(out_of_range e)
	{
		cout<<"Exception caught : "<<e.what()<<endl;
	}
	catch(invalid_argument e)
	{
		cout<<"Exception caught : "<<e.what()<<endl;
	}
	catch(...)
	{
		cout<<"Exception handeld unknown "<<endl;
	}
}
