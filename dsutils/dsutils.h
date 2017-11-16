#ifndef _UTILS_H
#define _UTILS_H 

#include <string>
#include <vector>
#include <map>
#include <stack>


class ConsoleApp {
	public:
		void cls();
		void clearinput();
		void displayMenu(std::vector<std::string>&);
		void waitForEnterKey();
};


extern ConsoleApp* app;

void arrangeArrayDriver();
void swapAlternateElementsDriver();
void reverseArrayDriver();
void sortArrayDriver();

#endif