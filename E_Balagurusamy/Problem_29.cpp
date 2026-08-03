#include<iostream>

using namespace std;

class item{
	
	private :
		int number;
		float cost;
	public:
		void get_data(int a, float b);
		void display();
};

void item::get_data(int a, float b)
{
	number=a;
	cost=b;
}

void item::display()
{
	cout<<"Number is : "<<number<<" Cost is : "<<cost<<endl;
}

int main()
{
	item x;
	x.get_data(1,10.5);
	cout<<"Object x : "<<endl;
	x.display();
	
	item y;
	y.get_data(2,15.5);
	cout<<"Object y : "<<endl;
	y.display();
	
	return 0;
	
}
