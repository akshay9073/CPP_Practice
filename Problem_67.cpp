#include<iostream>
#include<fstream>
#include<vector>
using namespace std;

int main()
{
	
	int intNum;
	ifstream inputfile("input.txt");
	ofstream outfile("output.txt");
	
	if(!inputfile || !outfile)
	{
		cerr<<"Problem in opening one of the file !!"<<endl;
		return 1;
	}
	
	while(inputfile>>intNum)
	{
		outfile<<intNum*2<<endl;
	}
	
	
	inputfile.close();
	outfile.close();
	
	cout<<"Done writing to the file!!"<<endl;
	return 1;
}
