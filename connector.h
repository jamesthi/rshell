#ifndef CONNECTER_H
#define CONNECTER_H
#include "base.h"

class Connector: public Base {

	protected:
		Base* child1;
		Base* child2;

	public:

		Connector() {};
		virtual void execute() = 0;
		


};
#endif
