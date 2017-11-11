#include <stdlib.h>
#include <stdio.h>
#include <iostream>
#include <vector>
#include "LinkedList.h"
#include "dsutils.h"

using namespace std;

LinkedList* list;

void printListDriver() {
	list->printList();
}

static vector<option>  options {
	{ "Create List", createListDriver },
	{ "Reverse List", reverseListDriver },
	{ "Check If Palindrome", checkPalindromeDriver },
	{ "Swap Adjaccent Nodes", swapAdjacentNodesDriver },
	{ "Create Loop in List", createLoopDriver},
	{ "Check if Loop is detected", checkLoopDriver},
	{ "Merge List", mergeListDriver },
	{ "Add with another List", addListDriver },
};

int main(int argc, char **argv) {
	//list = new LinkedList(10,80,10);
	list = new LinkedList(12345);
	menuloop(options,printListDriver);
	return 0;
}


