#include"Cat.h"
#include"Animal.h"
#include<string>
#include<iostream>

Cat::Cat(string name,double weight) : Animal(name,weight)
{
	this->name=name;
	this->weight=weight;
}

string Cat::makeNoise()
{
	return "Meoww!!";
}

string Cat::eat()
{
	return "I eat Cat Food";
}

void Cat::chaseMouse()
{
	cout<<"Chasing MOuse!!!!!"<<endl;
}
