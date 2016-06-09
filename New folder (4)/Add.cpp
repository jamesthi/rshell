#include<iostream>
#include"Add.h"
Add::Add( Base* num1, Base* num2 ) {
    child1 = num1;
    child2 = num2;
}
double Add::evaluate() {
    return child1->getChild() + child2->getChild();
}
double Add::getChild() {
    return evaluate();
}
Add::~Add() {
   delete child1;
   delete child2;
}
