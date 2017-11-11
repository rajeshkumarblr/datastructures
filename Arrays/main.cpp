#include <stdlib.h>
#include <stdio.h>
#include <iostream>
#include <map>
#include "arrayops.h"
#include "dsutils.h"

using namespace std;

int* arr;	
int n;

void printArrayDriver() {
	cout << endl;
	printArray("current",arr,n);
}


static Option menuoptions[] =  {
	{ "Create", createArrayDriver },
	{ "Rotate", rotateArrayDriver },
	{ "Search", searchArrayDriver },
	{ "Search Rotated Array", rotatedSearchArrayDriver }, 
	{ "Find Min element in Rotated Array", findMinElementDriver },
	{ "Reverse", reverseArrayDriver },
	{ "Arrange Min Max elements",arrangeMinMaxDriver},
	{ "Swap alternate elements",swapAlternateElementsDriver},
};

int main(int argc, char **argv) {
	SubMenu menu;
	menu.options.assign(menuoptions,menuoptions+SIZE(menuoptions));
	menu.defaultDriver = printArrayDriver;
	n = createArray(&arr,10,80,10);
	//printArray("initial",arr,n);	
	menuloop(menu);
	return 0;
}


