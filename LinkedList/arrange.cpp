#include <stdio.h>
#include "LinkedList.h"
#include <vector>
#include "dsutils.h"

using namespace std;

void LinkedList::reverseList() {
	Node* node = head;
    Node* prev = NULL;
    Node* tmp;
    while (node) {
        tmp = node->next;
        node->next = prev;
        prev = node;
        node = tmp;
    }
    head = prev;
}

void reverseListDriver() {
	list->reverseList();
	list->printList("Reversed List:");
}

/** 
 *   Input: 1 2 3 4 5 6
 *  Output: 2 1 4 3 6 5
**/

void LinkedList::swapAdjacentNodes() {
    if (head == NULL || head->next == NULL) {
        return;
    }
    Node* node = head;
    Node* prev= head;
    head = node->next;

    Node* nextNode;
    while (node && node->next) {
		// Get the pairNode 
		Node* pairNode = node->next;
		// Save the pairNode's next as nextNode.
		nextNode = pairNode->next;			
		// set pairNode's next as current Node.
		pairNode->next = node;
		// set previous pointer's next as this pairnode
		prev->next = pairNode;
		// Set the prev as current node.
        prev = node;
		// Set the current node to the start of next pairNode.
        node = nextNode;
    }
	// If node is NOT NULL means, there is one node left.
	// If yes, set the previous node's next to the remaining node.
	if (node) {
		prev->next = node;
	} else {
		prev->next = NULL;
	}
}

void swapAdjacentNodesDriver() {
    list->swapAdjacentNodes();
	list->printList("Swapped List:");
}

static vector<string> menuoptions = {
    "Return to Main menu...(Press x for Exit)", 
	"Reverse List",
	"Swap Alternate Nodes in the List",
};

void RearrangeNodesDriver() {
	char choice;
	do {
		cout << ("\n  Rearrange Menu:\n");
		if (list) {
			list->printList("Current List");
		}
		app->displayMenu(menuoptions);
		cout << "Enter your choice:";
		cin >> choice;
		app->clearinput();
		switch(choice) {
			case '0':
				return;
			case '1':
				reverseListDriver();
				break;
			case '2':
				swapAdjacentNodesDriver();
				break;
			case 'x':
				exit(0);
				break;
			default:
				cout << "unrecognized input. please try again \n";
				choice = 0;
				continue;
		}
	} while (choice != 0);
}

