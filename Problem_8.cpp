#include<iostream>
using namespace std;

int main()
{
	string text;
	
	cout<<"Enter any String : "<<endl;
	cin>>text;
	
	int i=0;
	int count=0;
	
	while(text[i]!='\0')
	{
		if(text[i]=='a'||text[i]=='e'||text[i]=='i'||text[i]=='o'||text[i]=='u')
		count++;
		i++;
	}
	
	cout<<"Vowels in given string is  : "<<count<<endl;
	
	return 0;
}
