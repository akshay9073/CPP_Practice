#include<iostream>

using namespace std;

int main()
{
	int count=0;
	//while loop
	while(count<10)
	{
		cout<<"Count :"<<count<<endl;
		count++;
	}
	
	int counter2=100;
	//do-while loop executes once
	do{
		cout<<"Counter2 : "<<counter2<<endl;
		counter2++;
	}while(counter2<100);
	
	//for loop 
	for(int i=0;i<10;i++)
	cout<<"i : "<<i<<endl;
	
	int input;
	cin>>input;
	//while user inputs negavtive number 
	while(input>=0)
	{
		cout<<"You Entered : "<<input<<endl;
		cout<<"Enter any integer : "<<endl;
		cin>>input;
	}
	
}
