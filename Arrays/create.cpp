#include <iostream>
#include <time.h>
#include <stdlib.h>
#include "arrayops.h"
#include "dsutils.h"

using namespace std;

void allocateArray(int size) {
	if (arr) {
		delete[] arr;
	}
	arr = new int[size];
	n = size;
}

void createArray(int st, int end, int incr) {
	int size =  (end - st) / incr + 1;
	allocateArray(size);
	int val = st;
	for (int i=0; i<size; i++) {
		arr[i]= val;
		val += incr;
	}
}

void createArrayValues() {
	int num;
	cout << "Create array with specific elements:" << endl;
	cout << "Enter the number of elements:";
	cin >> num;
	allocateArray(num);
	for (int i=0; i< num; i++) {
		cout << "Enter the next element(" << i << ")";
		cin >> arr[i];
	}
	printArray("created Array:",arr,n);
}

void createArrayRandom(int num, int min, int max) {
	allocateArray(num);
	srandom(time(NULL));
	double mul = ((max - min) / (double) RAND_MAX);
	for (int i=0; i< num; i++) {
		arr[i] = min + (rand() * mul);
	}
}

void createArrayRandomDriver() {
	int start, end, incr, num;
	cout << "Create array with random elements:" << endl;
	cout << "Enter the number of elements:";
	cin >> num;
	cout << " Enter the range (start end):";
	cin >> start >> end;
	cout << "Entered range is: (" << start << " - " << end << "). number of elements: " << num << endl;
	createArrayRandom(num, start, end);
	printArray("created Array:",arr,n);
}

void createArrayRange() {
	int start, end, incr;
	cout << "Create array by range:" << endl;
	cout << " Enter the range (start end):";
	cin >> start >> end;
	cout << " Enter the increment by value:";
	cin >> incr;
	cout << "Entered range is: (" << start << " - " << end << "). increment by: " << incr << endl;
	createArray(start, end,incr);
	printArray("created Array:",arr,n);
}

static vector<string> menuoptions = {
    "Return To Main Menu...",
	"Create array with range of numbers",
	"Create array with random values",
	"Create by entering values...", 
};

void createArrayDriver() {
    int choice;
	bool isCreated = false;
	cout << "  Create Array Menu:\n";
    do {
		printArrayDriver();
		app->displayMenu(menuoptions);
		cout << "Enter your choice:";
		cin >> choice;
		switch(choice) {
			case 0:
				return;
			case 1:
				createArrayRange();
				break;
			case 2:
				createArrayRandomDriver();
				break;
			case 3:
				createArrayValues();
				break;
			default:
				continue;
		}
		isCreated = true;
    } while(!isCreated);
}
