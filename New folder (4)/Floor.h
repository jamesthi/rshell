#ifndef FLOOR_H
#define FLOOR_H
#include<iostream>
#include "Base.h"
#include <math.h>
using namespace std;

class Floor : public Base {
    private:
	Base* child1;
    public:
	Floor( Base* num1 );
	~Floor();
	virtual double evaluate();
	virtual double getChild();
};
#endif
