#include "arrayops.h"
#include <iostream>
#include "dsutils.h"

using namespace std;

void searchDriver(bool isRotated) {
	int val;
	cout << "Enter the element to search \n" ;
	cin >> val;
	clearinput();
	int ind;
	if (isRotated) {
		ind = binarySearchSortedRotatedArray(arr,n,val);
	} else {
		ind = binarySearchSortedArray(arr,n,val);		
	}
	cout << "val " << val << " is ";
	if (ind >= 0 ) {
		cout << "found in array at index: " << ind << endl;
	} else {
		cout << "NOT found in array" << endl;
	}
}

void searchArrayDriver() {
	searchDriver(false);
}

void rotatedSearchArrayDriver() {
	searchDriver(true);
}

