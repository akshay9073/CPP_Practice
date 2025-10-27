#include<iostream>
#include<vector>
#include<string>

using namespace std;

int main()
{
	vector<string> names={"akshay","bhandari","king","don"};
	
	cout<<"Names are : "<<endl;
	
	names.push_back("bhai");//adds element at last
	
	for(int i=0;i<names.size();i++)
	cout<<names[i]<<"\t";
	
	cout<<"\nFront and Back elements : "<<endl;
	cout<<"Front : "<<names.front()<<endl;
	cout<<"Back : "<<names.back()<<endl;
	
	names.pop_back();//removes last element
	cout<<"Back : "<<names.back()<<endl;
	
	
	names.insert(names.begin(),"Hero");//Adds the element to front;
	cout<<"Front : "<<names.front()<<endl;
	
	names.insert(names.end(),"Master");//Adds the elemet at last
	cout<<"Back : "<<names.back()<<endl;
	
//	
names.insert(names.end(),'Good');//give error message
	
		
	
	return 0;
	
}
