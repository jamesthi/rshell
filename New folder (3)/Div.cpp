#include<iostream>
#include"Div.h"
Div::Div( Base* num1, Base* num2 ) {
    child1 = num1;
    child2 = num2;
}
double Div::evaluate() {
    return child1->getChild() / child2->getChild();
}
double Div::getChild() {
    return evaluate();
}
Div::~Div() {
   delete child1;
   delete child2;
}
