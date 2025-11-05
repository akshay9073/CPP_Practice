#include<iostream>
using namespace std;
void modifyGlobal();
int counter=0;
int main()
{
	
	cout<<"Counter before loop : "<<counter<<endl;
	
	for(int i=0;i<100;i++)
	modifyGlobal();
	
	cout<<"Counter after the loop : "<<counter <<endl;
	
}

void modifyGlobal()
{
	counter++;
}
