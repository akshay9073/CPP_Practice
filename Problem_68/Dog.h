#ifndef DOG_H
#define DOG_H

#include<string>
#include"Animal.h"

using namespace std;

class Dog:public Animal{

	public:
		Dog(string name,double weight,string breed);
		string getBreed();
		void digHole();
		string makeNoise();
		
		private :
			string breed;
			



};

#endif
