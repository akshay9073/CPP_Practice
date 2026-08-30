#include<iostream>
#include<cstring>
using namespace std;

template<class T1, class T2>
class Test
{
	T1 x;
	T2 y;
	public:
		Test(T1 b, T2 c):x(b),y(c){}
		
		void show()
		{
			cout<<" Employee name : "<<x
			<<" Employee ID : "<<y<<endl;
		}
};

int main()
{
	Test<string,int> t1("akshay",101);
	t1.show();
	
	Test<string,int> t2("Yash",102);
	t2.show();
	
	
	return 0;
}
