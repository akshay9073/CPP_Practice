#include<iostream>
#include<fstream>

using namespace std;

int main()
{
	cout<<"Writing to file..."<<endl;
	
	ofstream outfile("output.txt");
	
	if(!outfile)
	{
		cerr<<"Error : Could not open file for writing..."<<endl;
		return 1;
	}
	
	outfile<<"Hello World!!"<<endl;
	
	outfile.close();
	
	cout<<"Done"<<endl;
	
	return 0;
}
