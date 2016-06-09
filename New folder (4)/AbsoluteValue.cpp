#include<iostream>
#include"AbsoluteValue.h"
AbsoluteValue::AbsoluteValue( Base* num1 ) {
    child1 = num1;
}
double AbsoluteValue::evaluate() {
    return fabs(child1->getChild());
}
double AbsoluteValue::getChild() {
    return evaluate();
}
AbsoluteValue::~AbsoluteValue() {
   delete child1;
}
