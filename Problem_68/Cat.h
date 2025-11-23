#ifndef CAT_H
#define CAT_H
#include<string>
#include"Animal.h"
using namespace std;
class Cat: public Animal{
	
	public:
		Cat(string name,double weight);
		virtual string makeNoise();
		virtual string eat();
		void chaseMouse();
};



#endif
