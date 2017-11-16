#include <iostream>
#include "dsutils.h"
#include "arrayops.h"

using namespace std;

void bubbleSort() {
	int tmp;
	for (int i=0; i< (n-1); i++) {
		for (int j=i; j<n; j++) {
			if (arr[i]>arr[j]) {
				tmp = arr[i];
				arr[i] = arr[j];
				arr[j] = tmp;
			}
		}
	}
}

void selectionSort() {
	int tmp;
	for (int i=0; i< (n-1); i++) {
		int min = arr[i];
		int ind = i;
		for (int j=i; j<n; j++) {
			if (arr[j]<min) {
				ind = j;
			}
		}
		if (i != ind) {
			tmp = arr[i];
			arr[i] = arr[ind];
			arr[ind] = tmp;
		}
	}
}

void insertionSort() {
	
}

void quickSort() {
	
}

static vector<string> menuoptions =  {
	"Return to main menu..",
	"Bubble Sort",
	"Selection Sort",
	"Insertion Sort",
};


void sortArrayDriver() {
	int choice;
	do {
		printArrayDriver();
		cout << ("  Sorting Menu:\n");
		app->displayMenu(menuoptions);
		cout << "Enter your choice:";
		cin >> choice;
		switch(choice) {
			case 0:
				return;
			case 1:
				bubbleSort();
				break;
			case 2:
				selectionSort();
				break;
			default:
				continue;
		}
		
	} while (choice != 0);
}
