#include<iostream>

using namespace std;

class student
{
	protected:
		int roll_number;
	public:
		void get_number(int a)
		{
			roll_number=a;
		}
		void display_number()
		{
			cout<<"Roll Number : "<<roll_number <<endl;
		}
};

class test:public student
{
	protected:
	float sub1,sub2;
	public:
		void get_marks(float a, float b)
		{
			sub1=a;
			sub2=b;
		}
		void display_marks()
		{
			cout<<"Marks sub-1 : "<<sub1
			<< " Marks Sub-2 : "<<sub2<<endl;
		}
};

class sports
{
	protected:
		float score;
	public:
		void get_score(float s=0.0)
		{
			score =s;
		}
		
		void display_score()
		{
			cout<<" Sports wt "<<score<<endl;
		}
};

class result:public test, public sports
{
	float total;
	public:
		void display();
};

void result::display()
{
	total =sub1+sub2+score;
	
	display_number();
	display_marks();
	display_score();
	
	cout<<" Total Score : "<< total<<" \n"<<endl;
}

int main()
{
	result student_1;
	
	student_1.get_number(101);
	student_1.get_marks(25.5,28.5);
	student_1.get_score(9.5);
	student_1.display();
	
	return 0;
}
