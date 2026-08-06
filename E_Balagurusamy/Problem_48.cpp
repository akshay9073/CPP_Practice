#include<iostream>

using namespace std;

class matrix
{
	int **p;
	int a,b;
	public:
		matrix(int x, int y);
		void get_element(int i, int j, int value )
		{
			p[i][j]=value;
		}
		int &put_element(int i, int j)
		{
			return p[i][j];
		}
		
};

matrix::matrix(int x,int y)
{
	a=x;
	b=y;
	
	p=new int *[a];
	for(int i=0;i<a;i++)
	{
		p[i]=new int[b];
	}
	
}

int main()
{
	int m,n;
	
	cout<<"Enter size of matrix : ";
	
	cin>>m>>n;
	
	matrix A(m,n);
	
	cout<<"Enter matrix element row by row : "<<endl;
	
	int i,j, value;
	
	for(int i=0;i<m;i++)
	{
		for(int j=0;j<n;j++)
		{
			cin>>value;
			A.get_element(i,j,value);
	
		}	
	}
	
	cout<<"\n";
	cout<<A.put_element(1,2);
	
	return 0;
}
