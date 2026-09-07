#include<iostream>
#include<map>

using namespace std;

int main()
{
	map<string,int> m;
	
	m["tablet"]=100;
	m["tv"]=200;
	m["computer"]=300;
	m["moblie"]=400;
	
	for(auto p:m)
	{
		cout<<p.first<<" "<<p.second<<endl;
	}
	
	return 0;
	
}
