#ifndef DIV_H
#define DIV_H
#include<iostream>
#include "Base.h"
using namespace std;

class Div : public Base {
    private:
	Base* child1;
	Base* child2;
    public:
	Div( Base* num1, Base* num2 );
	~Div();
	virtual double evaluate();
	virtual double getChild();
};
#endif
