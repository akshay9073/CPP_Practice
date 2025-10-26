#include<iostream>
#include<string>
#include<vector>

using namespace std;
int main()
{
	vector<string> cars = {"Volvo", "BMW", "Ford", "Mazda"};

// Get the first element
//cout << cars[0];  // Outputs Volvo
//
//// Get the second element
//cout << cars[1];  // Outputs BMW
	
	cout<<"Cars are : "<<endl;
	
	for(int i=0;i<cars.size();i++)
	cout<<cars[i]<<"\t"<<endl;
	
	return 0;
}
