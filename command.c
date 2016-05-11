

// our leaf class
class Command: public Base{

	private:
		string executable;

	public:
		Command(string input){
		
			executable = input;
		}

		string getExecutable() {

			return executable;

		}

		void execute(){
			
		
		}
};
