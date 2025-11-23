#include<iostream>
#include"Animal.h"
#include"Dog.h"
#include"Cat.h"
using namespace std;

int main()
{
	Animal myAnimal("Sam",100);
	Dog dog("Rover",80,"Greyhound");
	
	Animal *dogPtr= new Dog("Fido",115,"Golden Retriever");
	cout<<"Make Noise? "<<dogPtr->makeNoise()<<endl;
	cout<<"Dog Eat "<<dogPtr->eat()<<endl;
	
	Animal *catPtr= new Cat("felix",12);
	cout<<"Make Noise? "<<catPtr->makeNoise()<<endl;
	cout<<"Cat Eats "<<catPtr->eat()<<endl;
	
	Cat *realCat=dynamic_cast<Cat*>(catPtr);
	if(realCat)
	{
		realCat->chaseMouse();
	}
	
	
	delete dogPtr;
	dogPtr=nullptr;
	
	delete  catPtr;
	catPtr=nullptr;
	
	
	cout<<"Animal name : "<<myAnimal.getName()<<endl;
	cout<<"Animal weight : "<<myAnimal.getWeight()<<endl;
	cout<<"Animal noise : "<<myAnimal.makeNoise()<<endl;
	
	cout<<"Dog's name : "<<dog.getName()<<endl;
	cout<<"Dog's weight :"<<dog.getWeight()<<endl;
	cout<<"Dog's noise : "<<dog.makeNoise()<<endl;
	dog.digHole();
	
	
	
}
