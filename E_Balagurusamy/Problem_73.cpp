#include<iostream>
#include<cstring>


using namespace std;

class city
{
	protected:
		char *name;
		int len;
	public:
		city()
		{
			len=0;
			name=new char[len+1];
		}
		void get_name()
		{
			char *s;
			s=new char[20];
			
			cout<<" Enter the city : "<<endl;
			cin>>s;
			
			len=strlen(s);
			name=new char[len+1];
			
			strcpy(name,s);
		}
		
		void printname()
		{
			cout<<name<<endl;
		}
};

int main()
{
	city *cptr[10];
	
	int n=1;
	
	int option;
	
	do
	{
		cptr[n]=new city;
		
		cptr[n]->get_name();
		n++;
		cout<<" Do you want to enter more city ? "<<endl;
		cout<<" (Enter 1 for yes and 0 for no) "<<endl;
		cin>>option;
		
		
	}while(option);
	
	cout<<" \n\n";
	
	for(int i=1;i<=n;i++)
	{
		cptr[i]->printname();
	}
	
	return 0;
}

