

class Connector: public Base {

	Private:
		Base* child1;
		Base* child2;

	Public:

		Connector(Base* input1, Base* input2){
			child1 = input1;
			child2 = input2;
		
		}
		virtual void execute() = 0;
		


};
