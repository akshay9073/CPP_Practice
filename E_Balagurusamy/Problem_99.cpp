#include<iostream>
#include<string>
#include<vector>

using namespace std;

int main()
{
	vector<string> car={"volvo","BMW","Maruti","Mercedes","Hyundai"};
	
	for(string c:car)
	{
		cout<<c<<" \t";
	}
	
	return 0;
}
