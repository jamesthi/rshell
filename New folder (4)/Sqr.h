#ifndef SQR_H
#define SQR_H
#include<iostream>
#include "Base.h"
using namespace std;

class Sqr : public Base {
    private:
	Base* child1;
    public:
	Sqr( Base* num1 );
	~Sqr();
	virtual double evaluate();
	virtual double getChild();
};
#endif
