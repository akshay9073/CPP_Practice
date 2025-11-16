#include<iostream>
#include"Triangle.h"
#include<cmath>

using namespace std;

Triangle::Triangle()
{
	this->sideA=0;
	this->sideB=0;
	this->sideC=0;
}

Triangle::Triangle(double a,double b,double c)
{
	this->sideA=a;
	this->sideB=b;
	this->sideC=c;
}

double Triangle::getSideA()
{
	return sideA;
}

double Triangle::getSideB()
{
	return sideA;
}

double Triangle::getSideC()
{
	return sideA;
}

void Triangle::setSideA(double a)
{
	this->sideA =a;
}

void Triangle::setSideB(double b)
{
	this->sideB=b;
}

void Triangle::setSideC(double c)
{
	this->sideC=c;
}

bool Triangle::isValid()
{
	return(sideA+sideB>sideC) && (sideA + sideC > sideB) && (sideB + sideC >sideA);
	
}		
		
double Triangle::perimeter()
{
	return sideA+sideB+sideC;
}
		
double Triangle::area()
{
	if(!isValid())
	{
		cout<<"Cannot compute area : triangle is invalid. "<<endl;
		return 0;
	}
	
	double s=perimeter()/2.0;
	
	return sqrt(s*(s-sideA)*(s-sideB)*(s-sideC));
}

