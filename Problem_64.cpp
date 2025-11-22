#include<iostream>
#include<fstream>

using namespace std;

int main()
{
	int inputNum;
	int sum=0;
	ifstream infile("input.txt");
	
	if(!infile)
	{
		cerr<<"Error : Could not open a file!!"<<endl;
		return 1;
	}
	
	while(infile>>inputNum)
	{
		sum+=inputNum;
	}
	
	cout<<"Sum of numbers is : "<<sum<<endl;
	
	infile.close();
	
	return 0;
}

