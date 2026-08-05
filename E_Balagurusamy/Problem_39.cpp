#include<iostream>

using namespace std;

class matrix
{
	int mat[3][3];
	public:
		void set_matrix();
		void display_matrix();
		friend matrix transpose_matrix(matrix m);
};

void matrix::set_matrix()
{
	for(int i=0;i<3;i++)
	{
		for(int j=0;j<3;j++)
		{
			cin>>mat[i][j];
		}
	}
}

void matrix::display_matrix()
{
	for(int i=0;i<3;i++)
	{
		for(int j=0;j<3;j++)
		{
			cout<<mat[i][j]<<"\t";
		}
		cout<<endl;
	}
}


matrix transpose_matrix(matrix m)
{
	matrix t;
	
	for(int i=0;i<3;i++)
	{
		for(int j=0;j<3;j++)
		{
			t.mat[i][j]=m.mat[j][i];
			
		}
	}
	
	return t;
}

int main()
{
	matrix m1,m2;
	
	cout<<"Enter the matrix : "<<endl;
	m1.set_matrix();
	cout<<"\nDisplay of the Matrix : "<<endl;
	m1.display_matrix();
	
	m2=transpose_matrix(m1);
	cout<<"The Transpose of the Matrix : "<<endl;
	m2.display_matrix();
	
	return 0;
	
}
