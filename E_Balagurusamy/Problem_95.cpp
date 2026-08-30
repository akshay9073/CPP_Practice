#include<iostream>

using namespace std;

class myclass
{
	public:
		template<typename T>
		void display(T x);
};

template<typename T>
void myclass:: display(T x)
{
	cout<<" Display function : "<<x<<endl;
}

int main()
{
	myclass obj;
	obj.display(100);
	obj.display('g');
	obj.display(100.25);
	
	return 0;
}
