#include <iostream>
#include <stdlib.h>
#include <stdio.h>
#include "dsutils.h"

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
	int i = 0;
	while (it != options.end()) {
		cout << i++ << ":" << it->optionMsg << endl; 
		it++;
	}
}

void exitDriver() {
	cout << "Exiting..\n" ;
	exit(0);
}

option exitOption = {"Exit", exitDriver};

void mainloop(std::vector<option>& options,callbackdriver defaultDriver) {
	unsigned int choice = 0;
	options.insert(options.begin(), exitOption);
	displaymenu(options);

	defaultDriver();
	do {
		cout << "\nEnter your choice for next operation:" << endl;
		cin >> choice;
		clearinput();
		if (choice <= options.size()) {
			option opt = options[choice];
			opt.driver();
		}
		defaultDriver();
	} while (true);
}
