#include<fstream>
#include<iostream>
#include<sstream>
#include<string>

using namespace std;

int main()
{
	ifstream infile("data.csv");
	string line;
	while(getline(infile,line))
	{
		stringstream ss(line);
				string cell;
			while(getline(ss,cell,','))
			{
				cout<<cell<<" ";
				}	
				
				cout<<"\n";
	}
	return 0;
}
