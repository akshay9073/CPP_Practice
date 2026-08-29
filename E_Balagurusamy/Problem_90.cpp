#include<iostream>

using namespace std;

template<typename T>
void swap_var(T &x, T &y)
{
	T temp=x;
	x=y;
	y=temp;
}

int main()
{
	int m,n;
	cout<<"Enter two numbers : "<<endl;
	cin>>m>>n;
	
	cout<<" Before swap : "
	<<" m : "<<m<<"\t n : "<<n<<endl;
	
	swap_var(m,n);
	
	cout<<" After swap : "
	<<" m : "<<m<<"\t n : "<<n<<endl;
	
	return 0;
}
