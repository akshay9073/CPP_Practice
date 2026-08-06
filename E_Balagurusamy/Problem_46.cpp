#include<iostream>

using namespace std;

class code
{
	int id;
	public:
		code(){};
		code(int a)
		{
			id=a;
		}
		code (code &x)
		{
			id=x.id;
		}
		void display()
		{
			cout<<"Display Code : "<<id<<endl;
		}
};


int main()
{
		code c1(10);
		
		c1.display();	
		
		code c2;
		c2=c1;
		
		c2.display();
		
		code c3(c1);
		c3.display();
		
		return 0;
}
