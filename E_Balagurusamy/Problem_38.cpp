#include<iostream>

using namespace std;

class class2;

class class1
{
	int value;
	public:
		void setvalue(int a)
		{
			value=a;
		}
		void display()
		{
			cout<<"Value of class1 : "<<value<<endl;
		}
		friend void exchange(class1 &,class2 &);
};

class class2
{
	int value;
	public:
		void setvalue(int a)
		{
			value=a;
		}
		void display()
		{
			cout<<"Value of class2 : "<<value<<endl;
		}
		friend void exchange(class1 &,class2 &);
};

void exchange(class1 &a, class2 &b)
{
	int temp=a.value;
	a.value=b.value;
	b.value=temp;
}

int main()
{
	class1 c1;
	
	c1.setvalue(10);
	
	class2 c2;
	c2.setvalue(5);
	
	cout<<"\nBefore swap : "<<endl;
	c1.display();
	c2.display();
	
	cout<<"\After swap : "<<endl;
	exchange(c1,c2);
	c1.display();
	c2.display();
	
	return 0;
}
