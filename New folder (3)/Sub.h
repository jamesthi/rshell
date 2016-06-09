#ifndef SUB_H
#define SUB_H
#include<iostream>
#include "Base.h"
using namespace std;

class Sub : public Base {
    private:
	Base* child1;
	Base* child2;
    public:
	Sub( Base* num1, Base* num2 );
	~Sub();
	virtual double evaluate();
	virtual double getChild();
};
#endif
