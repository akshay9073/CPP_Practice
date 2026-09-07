#include<iostream>
#include<set>
#include<unordered_set>
using namespace std;

int main()
{
	set<int> s;
	
	s.insert(1);
	s.insert(2);
	s.insert(3);
//	s.insert(4);
	s.insert(5);
	
	cout<<"lower bound : "<<*(s.lower_bound(4))<<endl;
	cout<<"upper bound : "<<*(s.upper_bound(4))<<endl;
	
	for(int i:s)
	{
		cout<<i<<" ";
	}
	cout<<endl;
	
	multiset<int> ms;
	
	ms.insert(1);
	ms.insert(2);
	ms.insert(3);
	ms.insert(2);
	ms.insert(2);

	for(auto k:ms)
	cout<<k<<" ";
	
	cout<<endl;
	
	unordered_set<int> uos;
	
	uos.insert(1);
	uos.insert(5);
	uos.insert(7);
	uos.insert(8);
	uos.insert(2);
	
	for(auto j:uos)
	cout<<j<<" ";
	
	cout<<endl;
	
	
	
	return 0;
}
