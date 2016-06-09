#include<iostream>
#include"Sqr.h"
Sqr::Sqr( Base* num1) {
    child1 = num1;
}
double Sqr::evaluate() {
    return child1->getChild() * child1->getChild();
}
double Sqr::getChild() {
    return evaluate();
}
Sqr::~Sqr() {
   delete child1;
}
