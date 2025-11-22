#include<iostream>
#include<fstream>
#include<vector>

using namespace std;

int main()
{
	int inputNum;
	int sum=0;
	vector<int> myInts;
	ifstream infile("input.txt");
	
	if(!infile)
	{
		cerr<<"Error : Could not open a file!!"<<endl;
		return 1;
	}
	
	while(infile>>inputNum)
	{
		myInts.push_back(inputNum);
		sum+=inputNum;
	}
	
	for(int num:myInts)
	cout<<num<<endl;
	
	
	cout<<"Sum of numbers is : "<<sum<<endl;
	
	infile.close();
	
	return 0;
}

