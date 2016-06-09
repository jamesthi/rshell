#include<iostream>
#include"Floor.h"
Floor::Floor( Base* num1 ) {
    child1 = num1;
}
double Floor::evaluate() {
    return floor(child1->getChild());
}
double Floor::getChild() {
    return evaluate();
}
Floor::~Floor() {
   delete child1;
}
