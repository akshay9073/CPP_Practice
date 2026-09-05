#include<iostream>

#include<vector>
using namespace std;

int main()
{
	vector<int> vec={1,2,3,4,5,6};
	
	vector<int>::iterator it;
	for(it=vec.begin();it!=vec.end();it++)
	cout<<*(it)<<endl;
	
	vector<int> vec1={1,2,3,4,5,6};
	
	vector<int>::reverse_iterator rit;
	for(rit=vec1.rbegin();rit!=vec1.rend();rit++)
	cout<<*(rit)<<endl;
	
	return 0;
}
