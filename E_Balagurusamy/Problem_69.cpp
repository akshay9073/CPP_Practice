#include<iostream>
#include<string.h>
using namespace std;

int main()
{
	int i=0;
	
	char *ptr[10]={"books", "televison", "computer","Sport"};
	
	char str[25];
	
	cout<<"Enter your favorite leisure pursuit : ";
	cin>>str;
	
	for(i=0;i<4;i++)
	{
		if(!strcmp(str,ptr[i]))
		{
			cout<<" Your favorite pursuit "<<" is available here"<<endl;
			break;
		}
	}
	if(i==4)
	{
		cout<<" Your favorite "<<" not available here "<<endl;
		
	}
	
	return 0;
}
