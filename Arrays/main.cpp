#include <stdlib.h>
#include <stdio.h>
#include <iostream>
#include <map>
#include "arrayops.h"
#include "dsutils.h"

using namespace std;

static int* arr;	
int n;

void printArrayDriver() {
	printArray("current",arr,n);
}

void createArrayDriver() {
	int start, end, incr;
	cout << "Enter the range of array (first last step)" << endl;
	cin >> start >> end >> incr;
	clearinput();
	n = createArray(&arr,start, end,incr);
}

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

void rotateArrayDriver() {
	int shift;
	cout << "Enter the number of times to rotate array \n";
	cin >> shift;	
	clearinput();
	rotateArray(arr, n,shift);	
}



void findMinElementDriver() {
	int ind = findMinElementInRotatedSortedArray(arr, n);
	cout << "min index of the array:" << ind << endl;
}

void reverseArrayDriver() {
	reverseArray(arr,n);
	printArray("reversed",arr,n);
}

void arrangeMinMaxDriver() {
	//arrangeMinMax(arr,n);
	int* tmp = arrangeMinMaxCopy(arr,n);
	delete[] arr;
	arr = tmp;
	printArray("rearranged",arr,n);
}

void swapAlternateElementsDriver() {
	swapAlternate(arr,n);
	printArray("swapped",arr,n);
}

void exitDriver() {
	exit(0);
}

static vector<option>  options {
	{ "Create Array", createArrayDriver },
	{ "Rotate Array", rotateArrayDriver },
	{ "Search Array", searchArrayDriver },
	{ "Search Rotated Array", rotatedSearchArrayDriver }, 
	{ "Find Min element in Rotated Array", findMinElementDriver },
	{ "Reverse Array", reverseArrayDriver },
	{ "Arrange Min Max elements",arrangeMinMaxDriver},
	{ "Swap alternate elements",swapAlternateElementsDriver},
};


int main(int argc, char **argv) {
	n = createArray(&arr,10,80,10);
	printArray("initial",arr,n);	
	mainloop(options,printArrayDriver);
	return 0;
}


