#include<iostream>

using namespace std;

class test
{
	static int count;
	public:
		void counter()
		{
			count++;
		}
		void display()
		{
			cout<<"The counter is : "<<count<<endl;
		}
};


int test::count;

int main()
{
	cout<<"The static count variable  "<<endl;
	
	test t1;
	t1.counter();
	t1.counter();
	t1.counter();
	t1.display();
	
	return 0;
}
