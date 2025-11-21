#include<iostream>
#include<fstream>
#include<iomanip>

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
	
	cout<<fixed<<showpoint;
	outfile<<fixed<<showpoint;
	
	for(int i=01;i<=10;i++)
	{
		double value1 =i*5.7575;
		double value2=i*3.14;
		
		cout<<setw(12)<<setprecision(2)<<value1
		<<setw(12)<<setprecision(3)<<value2<<endl;
		
		outfile<<setw(12)<<setprecision(2)<<value1
		<<setw(12)<<setprecision(3)<<value2<<endl;
		
		
	}
	outfile<<"Hello World!!"<<endl;
	
	outfile.close();
	
	cout<<"Done"<<endl;
	
	return 0;
}
