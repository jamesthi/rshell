
class And: public Base{

	private:


	public:

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
