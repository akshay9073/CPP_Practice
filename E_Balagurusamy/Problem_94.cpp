#include<iostream>

using namespace std;

template <typename T>
void display(T a)
{
	cout<<" Display 1 : "<<a<<endl;
}

template<typename T1,typename T2>
void display(T1 a, T2 b)
{
	cout<<" Display 2 : "<<a<<" - "<<b<<endl;
}

void display(int x)
{
	cout<<" Explicit Display is : "<<x<<endl;
}

int main()
{
	display(12);
	display('a','b');
	display('a',2);
	display(110.5);
}
