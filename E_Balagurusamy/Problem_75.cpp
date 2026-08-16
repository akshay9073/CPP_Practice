#include<iostream>

using namespace std;

class BC
{
	public:
		int b;
		void show()
		{
			cout<<" b = "<<b<<endl;
		}
		
};

class DC:public BC
{
	public:
		int d;
		void show()
		{
			cout<<" b = "<<b
			<<" d = "<<d<<endl;
		}
		
};

int main()
{
	BC *bptr;
	
	BC base;
	bptr=&base;
	
	bptr->b=100;
	
	cout<<" bptr points to base object "<<endl;
	
	bptr->show();
	
	DC derived;
	
	bptr=&derived;
	
	bptr->b=200;
	bptr->show();
	
	DC *dptr;
	
	dptr=&derived;
	dptr->d=100;
	
	dptr->show();
	
	cout<<" Using (DC *)bptr"<<endl;
	
	((DC *)bptr)->d=400;
	((DC *)bptr)->show();
	
	
	return 0;
}
