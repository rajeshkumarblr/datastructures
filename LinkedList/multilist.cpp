#include <stdio.h>
#include "LinkedList.h"
#include <vector>
#include "dsutils.h"

using namespace std;

void addListDriver();
void mergeListDriver();

static vector<string> menuoptions = {
    "Return to Main menu...(Press x for Exit)", 
	"Mege List with another list",
	"Add this list (representing a number) to another list (representing a number)",
};

void MultiListDriver() {
	char choice;
	do {
		cout << ("\n  MultiList Operations Menu:\n");
		if (list) {
			list->printList("Current List");
		}
		app->displayMenu(menuoptions);
		cout << "Enter your choice:";
		cin >> choice;
		app->clearinput();
		switch(choice) {
			case '0':
				return;
			case '1':
				mergeListDriver();
				break;
			case '2':
				addListDriver();
				break;
			case 'x':
				exit(0);
				break;
			default:
				cout << "unrecognized input. please try again \n";
				choice = 0;
				continue;
		}
	} while (choice != 0);
}

