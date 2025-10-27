#include<iostream>
#include<string>
#include<vector>

using namespace std;

int main()
{
	int matrix[2][2]={
		{1,2},
		{4,5}
	};
	
	cout<<"Matrix in reverse order  : "<<endl;
	
	for(int i=1;i>=0;i--)
	{
		for(int j=1;j>=0;j--)
		cout<<matrix[i][j]<<"\t";
		
		cout<<"\n";
	}
	
	return 0;
	
}
