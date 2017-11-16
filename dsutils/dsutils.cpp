#include <iostream>
#include <stdlib.h>
#include <stdio.h>
#include "dsutils.h"

using namespace std;

void ConsoleApp::cls() {	
	//system("cls");
	//system("clear");
	cout << "\033[2J\033[1;1H";
}

void ConsoleApp::clearinput() {
	cin.ignore(INT32_MAX, '\n');
	cin.clear();
	fflush(stdin);
}

void ConsoleApp::displayMenu(std::vector<string>& options) {
	vector<string>::iterator it = options.begin();
	int i = 0;
	while (it != options.end()) {
		cout << i++ << ":" << *it << endl; 
		it++;
	}
}

ConsoleApp* app;

void ConsoleApp::waitForEnterKey() {
	cout << "\npress Enter key to continue..\n";
	clearinput();
	char ch;
	do {
		ch = cin.get();
	} while(ch != '\n');
}

