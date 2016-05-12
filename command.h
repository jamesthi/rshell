#ifndef COMMAND_H
#define COMMAND_H
#include <iostream>
#include "base.h"
#include <sstream>
#include <string>
#include <string.h>
#include <sys/types.h>
#include <sys/wait.h>
#include <stdlib.h>
using namespace std;
class Command: public Base{

	private:
		string executable;

	public:
		Command(string input){
		    executable = input;
		}

		void execute() {
            stringstream iss1(executable);
            stringstream iss2(executable);
            int size;
            string input;
            int counter;
            while(iss1 >> input) ++counter;
            char *cmds[counter + 1];
            for(int i = 0; i < counter; ++i) {
                iss2 >> input;
                char *cstr = new char[input.length() + 1];
                strcpy(cstr, input.c_str());
                cmds[i] = cstr;
            }
            cmds[counter] = NULL;
            //int cstatus;
            pid_t c;
             c = fork();
            if (c == 0) {
                execvp(cmds[0], cmds);
                 cout << "Unknown Command." << endl;
            }
            else {
                waitpid(c, NULL, 0);
            }

		}

		string getExecutable(){
			return executable;
		
		}
};
#endif
