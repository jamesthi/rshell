#include<iostream>
#include"Ceiling.h"
Ceiling::Ceiling( Base* num1 ) {
    child1 = num1;
}
double Ceiling::evaluate() {
    return ceil(child1->getChild());
}
double Ceiling::getChild() {
    return evaluate();
}
Ceiling::~Ceiling() {
   delete child1;
}
