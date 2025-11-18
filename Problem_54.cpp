#include<iostream>
#include<stdexcept>
#include<vector>
using namespace std;

int main()
{
	vector<int> arr= {1,2};
	
	try{
		arr.at(3);
	}catch(out_of_range e)
	{
		cout<<"Caught : "<<e.what()<<endl;
	}
	
	return 0;
}
