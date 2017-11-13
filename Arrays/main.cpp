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
	{ "Search", searchArrayDriver},
	{ "Arrange", arrangeArrayDriver },
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


