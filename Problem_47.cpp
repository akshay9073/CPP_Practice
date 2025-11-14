#include<iostream>
#include<string>

using namespace std;

class House{
	
	public:
		void setNumStories(int numStories)
		{
			this->numStories=numStories;
		}
		
		void setNumWindow(int numWindows)
		{
			this->numWindows;
		}
		
		void setColor(string color)
		{
			this->color=color;
		}
		
		int getNumStories() const{
			
			return numStories;
		}
		
		int getNumWindows() const{
			return numWindows;
		}
		
		string getColor() const{
			return color;
		}
		
	private:	
		int numStories;
		int numWindows;
		string color;
};

int main()
{
	House myHouse;
	
	House yourHouse;
	
	myHouse.setNumStories(2);
	myHouse.setNumWindow(8);
	myHouse.setColor("Pink");
	
	yourHouse.setNumStories(10);
	yourHouse.setNumWindow(40);
	yourHouse.setColor("Green");
	
	cout<<"House has : "<<myHouse.getColor()
	<<" color "<<"\t "<<myHouse.getNumStories()<<" floor "<<" and "<<myHouse.getNumWindows()<<" windows"<<endl;
	
		cout<<"Your House has : "<<yourHouse.getColor()
	<<" color "<<"\t "<<yourHouse.getNumStories()<<" floor "<<" and "<<yourHouse.getNumWindows()<<" windows"<<endl;

}
