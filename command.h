#ifndef __COMMAND_CLASS__
#define __COMMAND_CLASS__

#include "composite.h"

class Command {
	protected:
		Base* root;
	
	public:
		Command() { };
		double execute() {
			return root->evaluate();
		};
		Base* get_root() {
			return root;
		};
};

class OpCommand : public Command {
	//OpCommand Code Here
};

class AddCommand : public Command {
	//AddCommand Code Here
};

class SubCommand : public Command {
	//SubCommand Code Here
};

class MultCommand : public Command {
	//MultCommand Code Here
};

class SqrCommand : public Command {
	//SqrCommand Code Here
};

#endif //__COMMAND_CLASS__
