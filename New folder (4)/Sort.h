#ifndef SORT_H
#define SORT_H
#include<iostream>
#include "Base.h"
class Container;

class Sort {
    public:
	Sort();
	virtual void sort(Container* container) = 0;
};
#endif
