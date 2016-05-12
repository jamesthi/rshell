#include <iostream>
#include <string>
#include <sstream>
#include "base.h"
#include "command.h"
#include "connector.h"
#include "and.h"
#include "or.h"
#include <vector>
using namespace std;

int main() {
    bool run = true;
    string input;
    string cmd1;
    string cmd2;
    string check;
    string temp1;
    string temp2;
    vector<Base*> commands;
    while(run) {
        cout << "$ ";
        getline(cin, input);
        stringstream iss(input);
        while(iss >> check) {
            if(check.at(check.length() - 1) == ';'){
                check.erase(check.length() - 1);
                cmd1 += " ";
                cmd1 += check;
                commands.push_back(new Command(cmd1));
                cmd1 = "";
                cmd2 = "";
            }
            else if (check == "&&") {
                while(iss >> check) {
                    if(check == "&&" || check == "||") {
                        Base* CMD2 = new Command(cmd2);
                        commands.push_back(new And(new Command(cmd1),CMD2));
                        cmd1 = cmd2;
                        cmd2 = "";
                        if(check == "&&") temp1 = "&&";
                        if(check == "||") temp2 = "||";
                        while(iss >> temp2) {
                            temp1 += temp2;
                            temp1 += " ";
                        }
                        iss.str(temp1);
                        temp1 = "";
                        break;
                    }
                    else if(check.at(check.length() - 1)) {
                        check.erase(check.length() - 1);
                        cmd2 += check;
                        Base* CMD2 = new Command(cmd2);
                        commands.push_back(new And(new Command(cmd1), CMD2));
                        cmd1 = "";
                        cmd2 = "";
                        break;
                    }
                    else{
                        if(cmd1 != "") cmd1 += " ";
                        cmd1 += check;
                    }
                }
            }
            else if(check == "||") {
                while(iss >> check) {
                    if(check == "&&" || check == "||") {
                        Command* CMD2 = new Command(cmd2);
                        commands.push_back(new Or(new Command(cmd1), CMD2));
                        cmd1 = cmd2;
                        cmd2 = "";
                        if(check == "&&") temp1 = "&&";
                        if(check == "||") temp1 = "||";
                        while(iss >> temp2) {
                            temp1 += temp2;
                            temp1 += " ";
                        iss.str(temp1);
                        temp1 = "";
                        break;
                        }
                    }
                    else if(check.at(check.length() - 1)) {
                        check.erase(check.length() - 1);
                        cmd2 += check;
                        Command* CMD2 = new Command(cmd2);
                        commands.push_back(new Or(new Command(cmd1), CMD2));
                        cmd1 = "";
                        cmd2 = "";
                        break;
                    }
                    else {
                        if(cmd1 != "") cmd1 += " ";
                        cmd1 += check;
                    }
                }
            }
            else if(check == "exit") {
                run = false;
            }
            else {
                if(cmd1 != "") cmd1 += " ";
                cmd1 += check;
            }
        }
        if(cmd1 != "") {
            commands.push_back(new Command(cmd1));
            cmd1 = "";
        }
        if (run) {
            for(int i = 0; i < commands.size(); ++i) {
                commands.at(i)->execute();
            }
            for(int i = 0; i < commands.size(); ++i) {
                commands.pop_back();
            }
        }
    }

    return 0;

}
    
