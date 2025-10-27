#include<iostream>
#include<vector>
#include<string>

using namespace std;
int main()
{
	vector<string> names;
	
	names.push_back("King");
	names.push_back("Hero");
	names.push_back("Don");
	names.push_back("Bhai");
	names.push_back("Bhaiya");
	
	cout<<"Before : "<<endl;
	for(int i=0;i<names.size();i++)
	cout<<names[i]<<endl;
	
	names.insert(names.begin()+2,"Good");
	names[3]="akshay";
	names.pop_back();
	
	cout<<"After : "<<endl;
	for(int i=0;i<names.size();i++)
	cout<<names[i]<<endl;
	
}
