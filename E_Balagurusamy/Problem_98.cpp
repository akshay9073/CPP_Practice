#include<iostream>
#include<cstring>
using namespace std;

template<class T1=int, class T2=int>
class Test
{
	T1 x;
	T2 y;
	public:
		Test(T1 a, T2 b):x(a),y(b){}
		void show()
		{
			cout<<" First argument is : "<<x
			<<" Second argument is : "<<y<<endl;
		}
};

int main()
{
	Test<string,int> t1("akshay",101);
	t1.show();
	Test<float,int>  t2(101.25,102);
	t2.show();
	Test<char, int>  t3('A',103);
	t3.show();
	Test<> t4('b',202);
	t4.show();
	
	return 0;
}
