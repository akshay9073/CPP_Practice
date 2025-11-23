#ifndef ANIMAL_H
#define ANIMAL_H

#include<string>

using namespace std;

class Animal{
	
	public:
		Animal(string name,double weight);
		string getName();
		void setName(string name);
		double getWeight();
		void setWeight(double weight);
		virtual string makeNoise();
		virtual string eat();
	
	private :
		string name;
		double weight;
};

#endif
