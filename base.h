#ifndef BASE_H
#define BASE_H

class Base {
	protected:
		bool success;
	public:
		Base() {};
		virtual void execute() = 0;

	    virtual bool getSuccess(){

			return success;			
		}

		virtual void setSuccess(bool input){

			success = input;
		}
};
#endif
