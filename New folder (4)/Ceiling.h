#ifndef CEILING_H
#define CEILING_H
#include<iostream>
#include "Base.h"
#include <math.h>
using namespace std;

class Ceiling : public Base {
    private:
	Base* child1;
    public:
	Ceiling( Base* num1 );
	~Ceiling();
	virtual double evaluate();
	virtual double getChild();
};
#endif
