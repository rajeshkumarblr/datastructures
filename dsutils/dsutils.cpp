#include <iostream>
#include <stdlib.h>
#include <stdio.h>
#include "dsutils.h"

using namespace std;

void cls() {	
	//system("cls");
	//system("clear");
	cout << "\033[2J\033[1;1H";
}

void clearinput() {
	cin.ignore(INT32_MAX, '\n');
	cin.clear();
	fflush(stdin);
}

void displaymenu(std::vector<Option>& options) {
	cls();
	vector<Option>::iterator it = options.begin();
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

void waitForEnterKey() {
	cout << "\npress Enter key to continue..\n";
	clearinput();
	char ch;
	do {
		ch = cin.get();
	} while(ch != '\n');
}

Option exitOption = {"Exit", exitDriver};

Option returnMenuOption = {"Return to Previous Menu", NULL};

int menuIndex = 0;


void menuloop(SubMenu subMenu) {	
	unsigned int choice = 0;
	
	if (menuIndex == 0) {
		subMenu.options.insert(subMenu.options.begin(), exitOption);
		menuIndex++;
	} else {
		subMenu.options.insert(subMenu.options.begin(), returnMenuOption);
	}
	callbackdriver defaultDriver = subMenu.defaultDriver;
	do {
		cls();
		displaymenu(subMenu.options);
		if (defaultDriver) {
			defaultDriver();
		}
		cout << "\nEnter your choice:" << endl;
		cin >> choice;
		clearinput();
		if ((choice == 0) && (menuIndex > 0)) {
			menuIndex--;
			return;
		}
		if (choice < subMenu.options.size()) {
			cout << "your choice is: " << subMenu.options[choice].optionMsg << endl << endl;
			Option& opt = subMenu.options[choice];
			opt.driver();
		}
		waitForEnterKey();
	} while (choice > 0);
	
	
}
