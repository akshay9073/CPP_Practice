#include<iostream>
#include<cstring>
using namespace std;

template<class T>
class Box
{
	T value;
	public:
		Box(T val):value(val){	}
		
		T get_value()
		{
			return value;
		}
		
		void change_value(T t)
		{
			value=t;
		}
		
		void display()
		{
			cout<<" Value is : "<<value<<endl;
		}
};

int main()
{
	Box<int> intBox(123);
	intBox.display();
	intBox.change_value(100);
	intBox.display();
	
	
	Box<float> floatBox(15.25);
	floatBox.display();
	floatBox.change_value(145.25);
	floatBox.display();
	
	Box<string> strBox("Hello, Akshay");
	strBox.display();
	strBox.change_value("Bhandari");
	strBox.display();
	
	return 0;
}
