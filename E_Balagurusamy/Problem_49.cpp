#include<iostream>

using namespace std;

class player
{
	 int score;
	public:
		player(int s)
		{
			score=s;
		}
		void update_score(int s)
		{
			score=s;
		}
		void display() const
		{
			cout<<"The Score is : "<<score<<endl;
		}
};

int main()
{
	player p1(10);
	
	p1.display();
	
	p1.update_score(300);
	
	p1.display();
	
	const player p2(30);// give error as const cannot call 
	
	p2.display();
	p2.update_score(100);
	
	return 0;
}
