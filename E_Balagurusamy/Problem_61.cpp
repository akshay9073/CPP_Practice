#include<iostream>

using namespace std;

class student
{
	protected:
		int roll_number;
	public:
		void get_number(int x)
		{
			roll_number=x;
		}
		void put_number()
		{
			cout<<" Roll Number : "<<roll_number<<endl;
		}
};

class test: virtual public student
{
	protected:
		float sub1,sub2;
	public:
		void get_marks(float x, float y)
		{
			sub1=x;
			sub2=y;
		}
		void put_marks()
		{
			cout<<" Subject -1 : "<<sub1<<endl;
			cout<<" Subject-2  : "<<sub2<<endl;
		}
};


class sports:public virtual student
{
	protected:
		float score;
	public:
		void get_score(float x=0.0)
		{
			score=x;
		}
		void put_score()
		{
			cout<<" Sports wt : "<<score<<endl;
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
	
	
	total=sub1+sub2+score;
	
	
	put_number();
	put_marks();
	put_score();
	
	cout<<" Total : "<<total<<endl;
	
}

int main()
{
	result student_1;
	
	student_1.get_number(101);
	student_1.get_marks(10.5,25.5);
	student_1.get_score(7.0);
	student_1.display();
	
	return 0;
}
