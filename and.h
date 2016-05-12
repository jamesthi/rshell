#ifndef AND_H
#define AND_H
#include "base.h"
#include "connector.h"
class And: public Connector{

	public:
        And(Base* ch1, Base* ch2) {
            Connector::child1 = ch1;
            Connector::child2 = ch2;
        }
		void execute(){

			child1->execute();

			if (child1->getSuccess())
			{
				child2->execute();
				this->setSuccess(child2->getSuccess());
			}
			else
			{
				this->setSuccess(false);
				child2->setSuccess(false);

			}

			
		}



};
#endif
