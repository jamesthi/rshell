#include<iostream>
#include"Mult.h"
Mult::Mult( Base* num1, Base* num2 ) {
    child1 = num1;
    child2 = num2;
}
double Mult::evaluate() {
    return child1->getChild() * child2->getChild();
}
double Mult::getChild() {
    return evaluate();
}
Mult::~Mult() {
   delete child1;
   delete child2;
}
