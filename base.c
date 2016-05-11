class Base {
	private:
		bool success;
	public:
		Base() {};
		virtual void execute() = 0;

		bool getSuccess(){

			return success;			
		}

		void setSuccess(bool input){

			success = input;
		}
};
