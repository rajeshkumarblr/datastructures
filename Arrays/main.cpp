#include "arrayops.h"
#include "dsutils.h"
#include <iostream>
#include <map>
#include <stdio.h>
#include <stdlib.h>

using namespace std;

int* arr;
int n;

void printArrayDriver()
{
    cout << endl;
    printArray("current array", arr, n);
}

static vector<string> menuoptions = {
    "Exit", "Create...", "Rotate...", "Search...", "Arrange...", "Sort...",
};

int main(int argc, char** argv)
{
    app = new ConsoleApp();
    createArray(10, 80, 10);
    int choice;
    do {
		printArrayDriver();
		cout << ("  Main Menu:\n");
		app->displayMenu(menuoptions);
		cout << "Enter your choice:";
		cin >> choice;
		switch(choice) {
			case 0:
				//printf("Press Enter to Exit..");
				//app->waitForEnterKey();
				return 0;
			case 1:
				createArrayDriver();
				break;
			case 2:
				rotateArrayDriver();
				break;
			case 3:
				searchArrayDriver();
				break;
			case 4:
				arrangeArrayDriver();
				break;
			case 5:
				sortArrayDriver();
				break;
		}

    } while(choice != 0);

    return 0;
}
