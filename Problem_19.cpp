#include<iostream>
#include<cstdlib>
#include<ctime>

using namespace std;

int main()
{
	int dieValue;
	
	srand(time(0));
	
	for(int i=0;i<10;i++)
	{
		dieValue=rand()%6+1;
		cout<<"Roll "<<(i+1)<<" : "<<dieValue<<endl;
	}
	
	return 0;
}
