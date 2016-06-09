#ifndef MULT_H
#define MULT_H
#include<iostream>
#include "Base.h"
using namespace std;

class Mult : public Base {
    private:
	Base* child1;
	Base* child2;
    public:
	Mult( Base* num1, Base* num2 );
	~Mult();
	virtual double evaluate();
	virtual double getChild();
};
#endif
