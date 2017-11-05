#include <iostream>
#include <stdlib.h>
#include <stdio.h>
#include "utils.h"

using namespace std;

void cls() {
	system("cls");
}

void clearinput() {
	cin.clear();
	fflush(stdin);
}

void displaymenu(std::vector<option>& options) {
	cls();
	vector<option>::iterator it = options.begin();
	int i = 1;
	while (it != options.end()) {
		cout << i++ << ":" << it->optionMsg << endl; 
		it++;
	}
}

void mainloop(std::vector<option>& options,callbackdriver defaultDriver) {
	unsigned int choice = 0;
	displaymenu(options);
	defaultDriver();
	do {
		cout << "  Enter your choice for next operation:" << endl;
		cin >> choice;
		clearinput();
		if (choice <= options.size()) {
			option opt = options[choice-1];
			opt.driver();
		}
		defaultDriver();
	} while (true);
}
