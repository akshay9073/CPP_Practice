#include<iostream>

using namespace std;
void read_mat(int **,int,int);

int main()
{
	int m,n;
	cout<<"Enter the Rows and Cols of Matrix : "<<endl;
	cin>>m>>n;
	
	 int** mat = new int*[m];
    for(int i = 0; i < m; i++) {
        mat[i] = new int[n];
    }
    
	read_mat(mat,m,n);
	
	cout<<"Matrix is : "<<endl;
	for(int i=0;i<m;i++)
	{
		for(int j=0;j<n;j++)
		cout<<mat[i][j]<<" ";
		
		cout<<endl;
	}
	
}

void read_mat(int** mat, int m, int n)
{
    cout << "Enter the matrix elements:" << endl;
    for(int i = 0; i < m; i++) {
        for(int j = 0; j < n; j++) {
            cin >> mat[i][j];
        }
    }
    
}
