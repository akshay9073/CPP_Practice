#include "House.h"
#include<iostream>
using namespace std;

		House::House()
		{
			this->numStories=1;
			this->numWindows=2;
			this->color="white";
			
		}

		void House::setNumStories(int numStories)
		{
			this->numStories=numStories;
		}
		
		void House::setNumWindow(int numWindows)
		{
			this->numWindows=numWindows;
		}
		
		void House::setColor(string color)
		{
			this->color=color;
		}
		
		int House::getNumStories() const{
			
			return numStories;
		}
		
		int House::getNumWindows() const{
			return numWindows;
		}
		
		string House::getColor() const{
			return color;
		}
		
		void House::printData()
		{
			cout<<"House has : "<<getColor()
			<<" color "<<"\t "<<getNumStories()<<" floor "<<" and "<<getNumWindows()<<" windows"<<endl;
		}
