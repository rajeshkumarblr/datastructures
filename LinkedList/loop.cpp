#include <stdio.h>
#include "LinkedList.h"

using namespace std;
void LinkedList::createLoop(int elem) {
    Node* node = head;
	int i = 0;
	while (node) {
		i++;
		if (i == elem) {
			node->next = head;
			break;
		}
		node = node->next;
	}
}

bool LinkedList::isLoopDetected() {
    if (head == NULL) {
        return false;
    }
    bool isLoopFound = false;
    Node *slow = head;
    Node* fast = head->next;
    while (fast && fast->next) {
        slow = slow->next;
        fast = fast->next->next;
        if (slow == fast) {
            isLoopFound = true;
            break;
        }
    }
    return isLoopFound;
}

void createLoopDriver() {
	int elem;
	int size = list->getSize();
	cout << "Enter the element to create a loop (max: "  << size << ")" << endl;
	cin >> elem;
	elem = elem % size;
	list->createLoop(elem);
	cout << "Loop created at element " << elem << endl;
}

void checkLoopDriver() {
	if (list->isLoopDetected()) {
		cout << "Loop detected in List" << endl;
	} else {
		cout << "Loop NOT detected in List" << endl;
	}
}
