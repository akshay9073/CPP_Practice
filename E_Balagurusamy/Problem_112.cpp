#include<iostream>
#include<algorithm>

using namespace std;

int main()
{
	int arr[5]={1,5,8,4,2};
	
	sort(arr,arr+5);
	
	for(auto a:arr)
	cout<<a<<" ";
	
	cout<<endl;
	
	vector<int> vec={1,5,2,7,8};
	
	sort(vec.begin(),vec.end());
	
	for(auto s:vec)
	cout<<s<<" ";
	
	cout<<endl;

	cout<<"Descending order : "<<endl;
	
		vector<int> v={1,5,2,7,8};
	
	sort(v.begin(),v.end(),greater<int>());
	
	for(auto s:v)
	cout<<s<<" ";
	
	cout<<endl;
	
	return 0;
}
