#include<iostream>

using namespace std;

class alpha
{
	int x;
	public:
		alpha(int a)
		{
			x=a;
			cout<<" aplha constructor "<<endl;
		}
		void show_alpha()
		{
			cout<<" x = "<<x<<" \n";
		}
};

class beta
{
	float p,q;
	public:
		beta(float a, float b):p(a),q(b+p)
		{
			cout<<" beta constructor "<<endl;
		}
		void show_beta()
		{
			cout<<" p "<<p<<endl;
			cout<<" q "<<q<<endl;
		}
};

class gama: public beta, public alpha
{
	int u,v;
	public:
		gama(int a, int b, float c): beta(c,c),alpha(a*2), u(a)
		{
			v=b;
			cout<<" gama constructor "<<endl;
		}
		void show_gama()
		{
			cout<<" u = "<<u<<endl;
			cout<<" y = "<<v<<endl;
		}
};

int main()
{
	gama g(2,4,2.5);
	
	cout<<" Display members value "<<endl;
	
	g.show_alpha();
	g.show_beta();
	g.show_gama();
	
	return 0;
}
