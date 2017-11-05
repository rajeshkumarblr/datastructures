#ifndef _UTILS_H
#define _UTILS_H 

#include <string>
#include <vector>

typedef bool optionCallback(unsigned int choice);
typedef void (*callbackdriver)();

struct option {
	//std::string optionMsg;
	const char* optionMsg;
	callbackdriver driver;
};

void cls();
void clearinput();
void displaymenu(std::vector<std::string>& options);
void mainloop(std::vector<option>& options,callbackdriver defaultDriver);

#endif