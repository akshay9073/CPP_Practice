#include<iostream>
using namespace std;

int main()
{
	enum Direction {UP,DOWN,LEFT,RIGHT};
	
	Direction myDirection=UP;
	
	if(myDirection==UP)
	{
		cout<<"up!!"<<endl;
	}
	else if(myDirection==DOWN)
	{
		cout<<"down!!"<<endl;
	}
	else if(myDirection==LEFT)
	{
		cout<<"Left!!"<<endl;
	}
	else if(myDirection==RIGHT)
	{
		cout<<"Right!!"<<endl;
	}
}
