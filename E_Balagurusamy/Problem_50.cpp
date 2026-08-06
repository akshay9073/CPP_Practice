#include<iostream>

using namespace std;

//int count=0;

class test
{
	private:
		static int count;
	public:
		test()
		{
			count++;
			cout<<"\nInside the constructor Object "<<count<<" created"<<endl;
		}
		~test()
		{
			cout<<"\nInside Destructor  Object "<<count<<" destroyed"<<endl;
			count--;
		}
};

int test::count=0;

int main()
{
	cout<<"\nInside the main function "<<endl;
	cout<<"\nCreating the object : "<<endl;
	
	test t1;
	
	{
		cout<<"\nInside a Block 1 : "<<endl;
		
		cout<<"\nCreating two more objects : "<<endl;
		test t2,t3;
		
		
		cout<<"\nLeaving block two "<<endl;
	}
	
	cout<<" Outside the block back to main function "<<endl;
	
	return 0;	
}
