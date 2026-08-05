#include<iostream>

using namespace std;

class demo
{
	int x;
	public:
		demo(int a) 
		{
			x=a;
		}
//		int modify() const   //Adding the keyword will give error "demo::x in read only object
		int modify() const
		{
//			x++;
			return x;
		}
};

int main()
{
	const demo d(20);
//	d.set_data(20);
	cout<<"The modified value is : "<<d.modify()<<endl;
	
	return 0;
}
