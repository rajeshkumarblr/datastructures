#include <stdlib.h>
#include <stdio.h>
#include <iostream>
#include <vector>
#include "LinkedList.h"
#include "dsutils.h"

using namespace std;

LinkedList* list;

void printListDriver() {
	list->printList("current list");
}

static vector<string>  menuoptions {
	"Exit",
	"Create List...",
	"Check Linked list(loop/palindrome)...",
	"Rearrange List Nodes(reverse/swap/sort)...",
	"Operations on two lists(merge/add)..",
};

int main(int argc, char **argv) {
	list = new LinkedList(10,80,10);
	//list = new LinkedList(12345);
    app = new ConsoleApp();
    //createArray(10, 80, 10);
	//createArrayRandom(10,10,100);
    int choice;
    do {
		cout << ("\n  Main Menu:\n");
		list->printList("current list");
		app->displayMenu(menuoptions);
		cout << "Enter your choice:";
		cin >> choice;
		switch(choice) {
			case 0:
				return 0;
			case 1:
				createListDriver();
				break;
			case 2:
				LoopOperationsDriver();
				break;
			case 3:
				RearrangeNodesDriver();
				break;
			case 4:
				MultiListDriver();
				break;
			default:
				break;
		}

    } while(choice != 0);

    return 0;
}


