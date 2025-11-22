#include<iostream>
#include"Animal.h"
#include"Dog.h"
using namespace std;

int main()
{
	Animal myAnimal("Sam",100);
	Dog dog("Rover",80,"Greyhound");
	
	cout<<"Animal name : "<<myAnimal.getName()<<endl;
	cout<<"Animal weight : "<<myAnimal.getWeight()<<endl;
	cout<<"Animal noise : "<<myAnimal.makeNoise()<<endl;
	
	cout<<"Dog's name : "<<dog.getName()<<endl;
	cout<<"Dog's weight :"<<dog.getWeight()<<endl;
	cout<<"Dog's noise : "<<dog.makeNoise()<<endl;
	dog.digHole();
	
	
	
}
