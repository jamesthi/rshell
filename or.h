#ifndef OR_H_
#define OR_H_
#include "base.h"
#include "connector.h"
class Or: public Connector {

	public:
        Or(Base* ch1, Base* ch2) {
            Connector::child1 = ch1;
            Connector::child2 = ch2;
            return;
        }
		void execute() {

			child1->execute();

			if (!(Connector::child1->getSuccess()))
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
