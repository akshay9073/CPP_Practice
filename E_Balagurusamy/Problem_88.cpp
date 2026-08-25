#include<iostream>

using namespace std;

template<typename T>
T Max(T a, T b)
{
	return a>b?a:b;
}

template<typename T>
T square(T a)
{
	return a*a;
}

int main()
{
	auto result1=Max (3,5);
	auto result2=Max (1.3,8.5);
	
	cout<<"result 1 : "<<result1<<endl;
	cout<<"result 2 : "<<result2<<endl;
	
	int num=5;
//	auto squared=square(num+1);
//	cout<<"Squared value is : "<<squared<<endl;
	
}
