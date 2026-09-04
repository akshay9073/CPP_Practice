#include<iostream>
#include<stack>

using namespace std;

int main()
{
	stack<string> car;
	
	car.push("Volvo");
	car.push("BMW");
	car.push("Ford");
	car.push("Mazda");
	
	while(!car.empty())
	{
		cout<<car.top()<<"\t";
		car.pop();	
	}
	
	cout<<car.empty();
	
	car.push("Tata");
	cout<<" \nChange top element "<<endl;
	car.top()="Force";
	cout<<car.top();
	
	cout<<"\nSize is : "<<car.size();
	cout<<"\n Is empty : "<<car.empty();
	
	return 0;
}
