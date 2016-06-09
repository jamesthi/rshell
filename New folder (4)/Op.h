#include<iostream>
#ifndef OP_H
#define OP_H
class Op : public Base {
    private:
	double number;
    public:
	Op(double num);
	virtual double getChild();
	virtual double evaluate();
};
#endif
