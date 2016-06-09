#ifndef ADD_H
#define ADD_H
#include<iostream>
#include "Base.h"
using namespace std;

class Add : public Base {
    private:
	Base* child1;
	Base* child2;
    public:
	Add( Base* num1, Base* num2 );
	~Add();
	virtual double evaluate();
	virtual double getChild();
};
#endif
