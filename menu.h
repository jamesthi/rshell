#ifndef __MENU_CLASS__
#define __MENU_CLASS__

#include <iostream>
#include "command.h"

using namespace std;

class Menu {
	private:
		int history_index;
		vector<Command*> history;

	public:
		Menu() {
			history_index = 0;
			history.resize(0);
		};
		void execute() {
			if(history.size() == 0)
			{
				cout << "0" << endl;
				return;
			}
			cout << history.at(history_index)->execute() << endl;
			//Prints the current commands value (based on history_index), if no commands exist
			//print 0 by default
		};
		bool initialized() {
			if(history.size() > 1)
			{
				return true;
			}
			return false;
			//Return true if the history has been primed with a single op instruction
			//This is necessary because that is the base of a calculation
		};
		void add_command(Command* cmd) {
			if(history.at(history_index + 1)->execute() == cmd->execute())
			{
				++history_index;
				return;
			}
			unsigned popbacks = history.size() - history_index;
			for(unsigned i = 1; i < popbacks; ++i)
			{
				history.pop_back();
			}
			history.push_back(cmd);
			if(history_index == 0)
			{
				return;
			}
			++history_index;
			//Adds a command to history in the appropriate posiiton (based on history_index)
		};
		Command* get_command() {
			return history.at(history_index);
			//Returns the command in history we are currently referring to (based on history_index)
		};
		void undo() {
			if(history_index != 0)
			{
				--history_index;
			}
			//Moves to the last command in history (if possible)
		};
		void redo() {
			if(history_index != (history.size() - 1))
			{
				++history_index;
			}
			//Moves to the next command in history (if possible)
		};
};

#endif //__MENU_CLASS__
