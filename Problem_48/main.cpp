#include<iostream>
#include<string>
#include"House.h"

using namespace std;

int main()
{
	House myHouse;
	
//	House yourHouse;
//	
//	myHouse.setNumStories(2);
//	myHouse.setNumWindow(8);
//	myHouse.setColor("Pink");
//	
//	yourHouse.setNumStories(10);
//	yourHouse.setNumWindow(40);
//	yourHouse.setColor("Green");
//	
//	cout<<"House has : "<<myHouse.getColor()
//	<<" color "<<"\t "<<myHouse.getNumStories()<<" floor "<<" and "<<myHouse.getNumWindows()<<" windows"<<endl;
//	
//		cout<<"Your House has : "<<yourHouse.getColor()
//	<<" color "<<"\t "<<yourHouse.getNumStories()<<" floor "<<" and "<<yourHouse.getNumWindows()<<" windows"<<endl;

//	myHouse.printData();
//	myHouse.printData();
//	


	cout<<"Before calling any user-defined function : "<<endl;
	myHouse.printData();
	
	
	cout<<"\nAfter calling any user-defined function : "<<endl;
		myHouse.setNumStories(2);
		myHouse.setNumWindow(8);
		myHouse.setColor("Pink");
	
	
	
		myHouse.printData();
	
	

}
