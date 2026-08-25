#include<iostream>

using namespace std;

template<typename T>
T Max(T a, T b)
{
	return a>b?a:b;
}

template<typename T1, typename T2>
void Product(T1 a, T2 b)
{
	cout<<" a * b =  "<<a*b<<endl;
}

int main()
{
//	auto result1=Max(3,5.7); Template issue for type one is int & double 
//	auto result1=Max(3,4); //this will work with no issues
	auto result2=Max(1.3,8.5);
	//To resolve the template dedcution error we need to typecast either of the parameter
	
//	auto result1=Max(static_cast<double>(3),5.6);
//	or 
	auto result1=Max(3,static_cast<int>(5.6));
	
	
	
	cout<<"result1 :"<<result1<<" \n";
	cout<<"result2 : "<<result2<<" \n";
	
	Product(3,5.5);
	
	return 0;
}
