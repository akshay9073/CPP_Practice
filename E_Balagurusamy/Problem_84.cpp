#include<iostream>
#include<cstring>
#include<conio.h>

using namespace std;

class Error
{
	int err_code;
	char *err_desc;
	public:
		Error(int c,char *d)
		{
			err_code=c;
			err_desc=new char[strlen(d)];
			strcpy(err_desc,d);
		}
		void display()
		{
			cout<<" Error code is : "<<err_code<<" \t "<<err_desc<<endl;
		}
};

int main()
{
	try
	{
		cout<<" Press any key to invoke try-catch block "<<endl;
		getch();
		
		throw Error(99,"Test Exception ");
	}
	catch(Error e)
	{
		cout<<" Exception caught successfully "<<endl;
		e.display();
	}
	getch();
	return 0;
}
