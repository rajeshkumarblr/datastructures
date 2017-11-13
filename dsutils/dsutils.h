#ifndef _UTILS_H
#define _UTILS_H 

#include <string>
#include <vector>

typedef bool optionCallback(unsigned int choice);
typedef void (*callbackdriver)();

struct Option {
	std::string optionMsg;
	callbackdriver driver;
};

struct SubMenu {
	std::vector<Option> options;
	callbackdriver defaultDriver;
};

void cls();
void clearinput();
void displaymenu(std::vector<std::string>& options);
void menuloop(SubMenu menu);
void arrangeArrayDriver();
void swapAlternateElementsDriver();
void reverseArrayDriver();

#endif