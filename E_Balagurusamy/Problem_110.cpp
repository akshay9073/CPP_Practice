#include<iostream>
#include<map>
#include<unordered_map>

using namespace std;

int main()
{
	map<string,int> m;
	
	m["tablet"]=100;
	m["tv"]=200;
	m["computer"]=300;
	m["moblie"]=400;
	
	m.insert({"camera",500});
	m.emplace("PS",1000);
	m.emplace("PS",2000);
	m.emplace("PS",1000);
	m.emplace("PS",1000);
	
	
	for(auto p:m)
	{
		cout<<p.first<<" "<<p.second<<endl;
	}
	
	if(m.find("tv")!=m.end())
		cout<<"found\n";
		else
		cout<<"not found"<<endl;
		
		
		multimap<string,int> mm;
		
		mm.emplace("tv",100);
		mm.emplace("tv",200);
		mm.emplace("tv",300);
		mm.emplace("tv",400);
		
		mm.erase(mm.find("tv"));
		for(auto p:mm)
		cout<<p.first<<" "<<p.second<<endl;
		
		unordered_map<int,int> um;
		
		um[1]=10;
		um[5]=20;
		um[7]=30;
		um[3]=40;
		um[2]=50;
		
		for(auto p:um)
		cout<<p.first<<" "<<p.second<<endl;
		
	return 0;
	
}
