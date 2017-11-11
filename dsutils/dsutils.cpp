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

Option exitOption = {"Exit", exitDriver};

Option returnMenuOption = {"Return to Previous Menu", NULL};

vector<SubMenu> fullMenu;

int menuIndex = 0;

void menuloop(SubMenu subMenu) {	
	unsigned int choice = 0;
	
	if (menuIndex == 0) {
		subMenu.options.insert(subMenu.options.begin(), exitOption);
		menuIndex++;
	} else {
		subMenu.options.insert(subMenu.options.begin(), returnMenuOption);
	}
	fullMenu.push_back(subMenu);
	callbackdriver defaultDriver = subMenu.defaultDriver;
	do {
		SubMenu& menu = fullMenu[menuIndex];
		cls();
		displaymenu(subMenu.options);
		if (defaultDriver) {
			defaultDriver();
		}
		cout << "\nEnter your choice:" << endl;
		cin >> choice;
		clearinput();
		if (choice < subMenu.options.size()) {
			cout << "your choice:" << subMenu.options[choice].optionMsg << endl;
			Option& opt = subMenu.options[choice];
			opt.driver();
		}
		clearinput();
		if (choice == 0 && (menuIndex>0)) {
			fullMenu.pop_back();
		}
		cin.get();
	} while (choice > 0);
	
	
}
