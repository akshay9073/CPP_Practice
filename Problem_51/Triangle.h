#ifndef TRIANGLE_H
#define TRIANGLE_H

using namespace std;

class Triangle
{
	public:
		Triangle();
		Triangle(double a,double b,double c);
		double getSideA();
		double getSideB();
		double getSideC();
		void setSideA(double a);
		void setSideB(double b);
		void setSideC(double c);
		
		bool isValid();
		double perimeter();
		double area();
	private:
		
		double sideA;
		double sideB;
		double sideC;
};

#endif
