#include<iostream>
#include"Sub.h"
Sub::Sub( Base* num1, Base* num2 ) {
    child1 = num1;
    child2 = num2;
}
double Sub::evaluate() {
    return child1->getChild() - child2->getChild();
}
double Sub::getChild() {
    return evaluate();
}
Sub::~Sub() {
   delete child1;
   delete child2;
}
