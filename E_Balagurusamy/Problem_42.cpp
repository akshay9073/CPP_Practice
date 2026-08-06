#include<iostream>

using namespace std;

class matrix{
	
	int mat[3][3];
	public:
		void read_matrix();
		void display();
		matrix multiplication(matrix,matrix);
};

void matrix::read_matrix()
{
	cout<<"\nEnter the Matrix elements : "<<endl;
	
	for(int i=0;i<3;i++)
	{
		for(int j=0;j<3;j++)
		cin>>mat[i][j];
	}
}

void matrix::display()
{
	cout<<"\nMatrix Elements"<<endl;
	for(int i=0;i<3;i++)
	{
		for(int j=0;j<3;j++)
		cout<<mat[i][j]<<"\t";
		
		cout<<endl;
	}
	
}

matrix matrix::multiplication(matrix m, matrix n)
{
	matrix r;
	
	for(int i=0;i<3;i++)
	{
		for(int j=0;j<3;j++)
		{
			r.mat[i][j]=0;
			
			for(int k=0;k<3;k++)
			r.mat[i][j]+=m.mat[i][k]*n.mat[k][j];
		}
	}
	
	return r;
}

int main()
{
	matrix mat1,mat2;
	
	mat1.read_matrix();
	mat2.read_matrix();
	
	cout<<"\nDisplay Matrix-1 : "<<endl;
	mat1.display();
	cout<<"\nDisplay Matrix-2 : "<<endl;
	mat2.display();
	
	matrix result=result.multiplication(mat1,mat2);
	
	cout<<"Matrix Multiplication is : "<<endl;
	result.display();
	
}
