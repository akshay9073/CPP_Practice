#include<iostream>

#include<map>

using namespace std;

int main()
{
	map<string, int> people={{"John",32}, {"Adele",45},{"Bo",29}};
	
	cout<<people.at("John");
	cout<<"\n Adele is : "<<people["Adele"];
	
	cout<<"\n Modify value "<<endl;
	people["Bo"]=45;
	
	cout<<" Bo is : "<<people.at("Bo");
	
	return 0;
}
