#ifndef VECTORCONTAINER_H
#define VECTORCONTAINER_H
#include<iostream>
#include<vector>
#include "Container.h"
#include "Base.h"
using namespace std;

class VectorContainer : public Container {
    private:
    vector<Base *> vec;
    public:
    VectorContainer();
    ~VectorContainer();
    virtual void add_element(Base * element);
    virtual void print();
    virtual void sort();
    virtual void swap(int i, int j);
    virtual Base * at(int i);
    virtual int size();
};
#endif 
