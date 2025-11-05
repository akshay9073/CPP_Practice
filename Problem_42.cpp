#include<iostream>
#include<string>

using namespace std;
int getresult(int);
string getresult(string,string);
int main()
{
	int num;
	
	cout<<"Enter the Number : "<<endl;
	cin>>num;
	
	cout<<" Cube of "<<num <<" is : "<<getresult(num)<<endl;
	cout<<"String returned is :"<<getresult("akshay","bhandari")<<endl;
	
	return 0;
}

int getresult(int num)
{
	return num*num*num;
}

string getresult(string str0,string str1)
{
	return str0+" "+str1;
}
