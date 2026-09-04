#include<iostream>
#include<string>
#include<vector>

using namespace std;

int main()
{
	vector<string> car={"volvo","BMW","Maruti","Mercedes","Hyundai"};
	
	for(string c:car)
	{
		cout<<c<<" \t";
	}
	
	cout<<"\nAccess element one by one"<<endl;
	cout<<car[0]<<endl;
	cout<<car[1]<<endl;
	cout<<car.front()<<endl;
	cout<<car.back()<<endl;
	cout<<car.at(2)<<"\t";
	cout<<car.at(4);
	
	cout<<"\n Adding element to vector"<<endl;
	car.push_back("Alto");
	car.push_back("Rolls");
	car.push_back("Bentle");
	car.push_back("Ferrari");
	
	for(string c:car)
	{
		cout<<c<<endl;
	}
	
	cout<<"Pop Back function"<<endl;
	car.pop_back();
	car.pop_back();
	car.pop_back();
	
	cout<<"\nPop Back"<<endl;
	for(string c:car)
	{
		cout<<c<<endl;
	}
	
	cout<<"Size of car : "<<car.size();
	cout<<"Is empty : "<<car.empty();
	
	
	
	return 0;
}
