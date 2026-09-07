#include<iostream>
#include<vector>

using namespace std;

int main()
{
	vector<int> number={1,2,3,4,5};
	
	for(auto it=number.begin();it!=number.end();++it)
	cout<<*it<<endl;
	
	return 0;
	
}
