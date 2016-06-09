#include "Base.h"
#include "Op.h"

Op::Op( double num ){ number = num;}
double Op::getChild() {
	return number;
}
double Op::evaluate() {
	return number;
}

