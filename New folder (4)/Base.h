#include<iostream>
#ifndef BASE_H
#define BASE_H
class Base {
    public:
	/*Constructers*/
	Base() { }; 
	virtual double evaluate() = 0;
	virtual double getChild() = 0;
};
#endif

