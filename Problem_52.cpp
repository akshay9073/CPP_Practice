#include<iostream>
#include<string>
#include<stdexcept>
#include<vector>

using namespace std;

int main()
{
	vector<int> myNums;
	
	
	
	try{
		myNums.resize(myNums.max_size()+1);
		
	}
	catch(const length_error& err)
	{
		cout<<"caught a lenght_error "<<err.what()<<endl;
	}
	
	cout<<"Yay, it's a big Vector "<<endl;
}

