#include"Dog.h"
#include<iostream>

using namespace std;

Dog::Dog(string name,double weight,string breed) :Animal(name,weight)
{
	this->breed=breed;
}

string Dog::getBreed()
{
	return breed;
}

void Dog::digHole()
{
	cout<<"I'm digging a hole!!"<<endl;
}

string Dog::makeNoise()
{
	return "Wooff";
}

string Dog::eat()
{
	return "I love dog food!!";
}
