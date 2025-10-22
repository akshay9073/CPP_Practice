#include<iostream>

using namespace std;

int main()
{
	bool isRaining=true;
	
	cout<<boolalpha<<endl;
	
	cout<<boolalpha<<"isRaining : "<<isRaining<<endl; //inline declaration of boolalpha
	
	cout<<noboolalpha<<endl;  //restores back to numeric output
	
		cout<<"isRaining : "<<isRaining<<endl;
	
	return 0;
}
