#include<iostream>
#include<fstream>
#include<string>

using namespace std;

int main()
{
	ifstream namefile("name.txt");
	ifstream agefile("ages.txt");
	
	ofstream outfile("output.txt");
	
	if(!namefile || !agefile)
	{
		cerr<<"Problem opening one of the intput files. Exiting.";
		return 1;
	}
	
	string tempName;
	int tempAge;
	
	while(getline(namefile,tempName)&&(agefile>>tempAge))
	{
		outfile<<tempName<< " "<<tempAge<<endl;
	}
	
	
	
	
	
	namefile.close();
	agefile.close();
	outfile.close();
	
	cout<<"Don't writing to output.txt!!"<<endl;
}
