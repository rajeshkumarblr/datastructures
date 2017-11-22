#include <stdio.h>
#include "LinkedList.h"
#include <vector>
#include "dsutils.h"

using namespace std;

Node* LinkedList::getNodeFromEnd(int n) 
{
    Node* node = head;

    for (int i=0; (node != NULL) && (i < n); i++) {
        node = node->next;
    }

    if (node == NULL) {
        return NULL;
    }

	Node* front = node;
	node = head; 
    while (front->next) {
		node = node->next;
        front = front->next;
    }

    return node;
}

void getNthNodeFromEndDriver() {
	int pos;
	cout << "Enter the position from last node to get:";
	cin >> pos;
	Node* node = list->getNodeFromEnd(pos);
	if (node!= NULL) {
		cout << "node from end in the psoition: " << pos << "is: "<< node->data << endl;
	} else {
		cout << "node not found" << endl;
	}
}

Node* LinkedList::getMiddleNode() {
    if (head == NULL) {
        return NULL;
    } else if (head->next == NULL) {
        return head;
    }

    Node* slowPtr = head;
    Node* fastPtr = head->next;
    while (fastPtr) {
        if (fastPtr->next) {
            fastPtr = fastPtr->next->next;
        } else {
			break;
		}
        slowPtr = slowPtr->next;
    }
    return slowPtr;
}

void getMiddleNodeDriver() {
	Node* node = list->getMiddleNode();
	if (node!= NULL) {
		cout << "middle node is "<< node->data << endl;
	} else {
		cout << "middle node not found";
	}
}

static vector<string> menuoptions = {
    "Return to Main menu...(Press x for Exit)", 
	"Find Middle element",
	"Find nth node from last",
};

void findNodesDriver() {
	char choice;
	do {
		cout << ("\n  Find Menu:\n");
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
				getMiddleNodeDriver();
				break;
			case '2':
				getNthNodeFromEndDriver();
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

