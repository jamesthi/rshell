#ifndef ABSOLUTEVALUE_H
#define ABSOLUTEVALUE_H
#include<iostream>
#include "Base.h"
#include <math.h>
using namespace std;

class AbsoluteValue : public Base {
    private:
	Base* child1;
    public:
	AbsoluteValue( Base* num1 );
	~AbsoluteValue();
	virtual double evaluate();
	virtual double getChild();
};
#endif
