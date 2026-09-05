#include<iostream>
#include<utility>
#include<vector>
using namespace std;

int main()
{
	pair<int,int> p={1,2};
	pair<int,int> q={3,4};
		cout<<p.first<<" "<<p.second<<endl;
		cout<<q.first<<" "<<q.second<<endl;
		
		vector<pair<int,int>> vec={{1,2},{3,4},{5,6}};
		for(auto p:vec)
		cout<<p.first<<" "<<p.second<<endl;
		
		pair<int,pair<char,int>> pp={1,{'a',101}};
		
		cout<<pp.first<<endl;
		cout<<pp.second.first<<endl;
		cout<<pp.second.second<<endl;
	
	return 0;
}
