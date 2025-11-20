#include<iostream>
#include "Dog.h"
using namespace std;

int main()
{
	Dog *myDogPtr= new Dog("Rover","German Shephard");
	Dog *yourDogPtr= new Dog("Fido","Beagle");
	
	cout<<"Using arrow operator : "<<endl;
	cout<<myDogPtr->getBreed()<<endl
	<<myDogPtr->getName()<<endl;
	
		cout<<yourDogPtr->getBreed()<<endl
	<<yourDogPtr->getName()<<endl;
	
	cout<<"Using derefernce and dot operator :"<<endl;
	cout<<(*myDogPtr).getBreed()<<endl
	<<(*myDogPtr).getName()<<endl;
	
	cout<<(*yourDogPtr).getBreed()<<endl
	<<(*yourDogPtr).getName()<<endl;
	
	delete myDogPtr;
	delete yourDogPtr;
	
	return 0;
}
