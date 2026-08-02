#include<iostream>

#define greatest(a,b,c) ((a>b && a>c)?a:((b>c)?b:c))

using namespace std;

int main()
{
	int a,b,c;
	cout<<"Enter the three numbers : "<<endl;
	cin>>a>>b>>c;
	
	cout<<"Greatest of three is : "<<endl;
	cout<<greatest(a,b,c)<<endl;
	
	return 0;
	
	
}
