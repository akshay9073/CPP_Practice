#include<iostream>

#include<vector>

using namespace std;

int main()
{
	vector<int> vec;
	
	cout<<vec.size()<<endl;
//	vec.push_back(1);
//	cout<<vec.capacity();
	
	vector<int> vec1={1,2,3,4,5};
	
	vector<int> vec2(vec1);
	
	vector<int> vec3(3,10);
//	for(int i=0;i<vec3.size();i++)
//	cout<<vec3[i]<<endl;
	
	vec3.erase(vec3.begin()+1,vec3.begin()+3);
	for(int i=0;i<vec3.size();i++)
	cout<<vec3[i]<<endl;
	
	cout<<*(vec.begin())<<endl;
	
	
	return 0;
}
