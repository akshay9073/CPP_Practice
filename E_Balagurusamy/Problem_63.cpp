#include<iostream>

using namespace std;

class alpha
{
	int a;
	public:
		alpha(int x)
		{
			a=x;
			cout<<"\n alpha initialized "<<endl;
		}
		void show_x()
		{
			cout<<" x is : "<<a<<endl;
		}
};

class beta
{
	float y;
	public:
		beta(float b)
		{
			y=b;
			cout<<"\n beta initialized "<<endl;
		}
		void show_y()
		{
			cout<<" y is : "<<y<<endl;
		}		
};

class gama:public beta, public alpha
{
	int m,n;
	public:
	gama(int a, float b, int c, int d): alpha(a),beta(b)
	{
		m=c;
		n=d;
		cout<<" gama initialized \n"<<endl;
	}
	void show_mn()
	{
		cout<<" m = "<<m<<" \n";
		cout<<" n = "<<n<<"\n";
	}
};

int main()
{
	gama g(5,10.75,20,30);
	
	cout<<" \n"<<endl;
	g.show_x();
	g.show_y();
	g.show_mn();
	
	return 0;
}


