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

void reverseListDriver() {
	list->reverseList();
}

void checkPalindromeDriver() {
	if (list->isPalindrome()) {
		cout << "List is a Palindrome" << endl;
	} else {
		cout << "List is NOT a Palindrome" << endl;
	}
}


void swapAdjacentNodesDriver() {
    list->swapAdjacentNodes();
}


static vector<option>  options {
	{ "Create List", createListDriver },
	{ "Reverse List", reverseListDriver },
	{ "Check If Palindrome", checkPalindromeDriver },
	{ "Swap Adjaccent Nodes", swapAdjacentNodesDriver },
	{ "Create Loop in List", createLoopDriver},
	{ "Check if Loop is detected", checkLoopDriver},
	{ "Merge List", mergeListDriver },
};

int main(int argc, char **argv) {
	list = new LinkedList(10,80,10);
	mainloop(options,printListDriver);
	return 0;
}


