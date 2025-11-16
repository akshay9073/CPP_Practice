#ifndef HOUSE_H
#define HOUSE_H

#include<string>
using namespace std;

class House{
	public:
		House();
		~House();
		House(int numStories,int numWindows, string color);
		void setNumStories(int);
		void setNumWindow(int );		
		void setColor(string );
		
		int getNumStories() const;
		int getNumWindows() const;
		string getColor() const;
		void printData();
		
	private:
		int numStories;
		int numWindows;
		string color;
};

#endif
