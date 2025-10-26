
#include<iostream>

#include<vector>

using namespace std;
int main()
{
	vector<int> arr(3);
	
	for(int i=0;i<5;i++)
	cin>>arr[i];

//	arr[0]=10;
//	arr[1]=20;
//	arr[2]=30;
		
	for(int i=0;i<arr.size();i++)
	cout<<arr[i]<<"\t";
	
	return 0;
}
