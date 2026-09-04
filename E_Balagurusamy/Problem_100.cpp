#include<iostream>
#include<list>

using namespace std;

int main()
{
	list<string> car={"Volvo","BMW","Mercedes","Tata","Ford"};
	
	cout<<" \n Access List "<<endl;
	cout<<car.front()<<endl;
	cout<<car.back()<<endl;
	
	cout<<" Change first and last element of list"<<endl;
	car.front()="BNY";
	car.back()="Rolls Royce";
	
	cout<<car.front()<<endl;
	cout<<car.back()<<endl;
	
	
	cout<<" Add elements to list "<<endl;
	car.push_front("Jagur");
	car.push_back("Maruti");
	
	for(string c:car)
	{
		cout<<c<<"\t";
	}
	
	cout<<" \nRemove list elements "<<endl;
	car.pop_back();
	car.pop_back();
	car.pop_front();
	
	for(string c:car)
	{
		cout<<c<<"\t";
	}
	
	
	cout<<" \nSize of list"<<endl;
	cout<<car.size();
	
	cout<<" \nCheck if list is empty"<<endl;
	cout<<car.empty();
	
	cout<<" \n Loop through the list "<<endl;
	for(int i=0;i<car.size();i++)
	{
		cout<<car[i]<<endl;
	}
	
	
	return 0;
}
