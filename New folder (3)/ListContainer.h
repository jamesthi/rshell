#ifndef LISTCONTAINER_H
#define LISTCONTAINER_H
#include<iostream>
#include<list>
#include "Container.h"
#include "Base.h"
using namespace std;

class ListContainer : public Container {
    private:
    list<Base *> list1;
    public:
    ListContainer();
    ~ListContainer();
    virtual void add_element(Base * element);
    virtual void print();
    virtual void sort();
    virtual void swap(int i, int j);
    virtual Base * at(int i);
    virtual int size();
};
#endif 
