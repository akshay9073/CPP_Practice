#include<iostream>

using namespace std;

int m=100;

int main()
{
	int m=200;
	
	{
		
		int m=300;
		
		cout<<"Inner Block m : "<<m<<endl;
		cout<<"Global value of m : "<<::m<<endl;
	}
	
	cout<<"Main Block m : "<<m<<endl;
	
	return 0;
	
}
