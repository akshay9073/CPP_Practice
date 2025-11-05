#include<iostream>

using namespace std;

void threeTimesN(int,int &);
int main()
{
	int input,output;
	
	cout<<"Enter any integer : "<<endl;
	cin>>input;
	threeTimesN(input,output);
	cout<<"The output is : "<<output<<endl;
}

void threeTimesN(int input,int &output)
{
	output=input*3;
}
