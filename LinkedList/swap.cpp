#include <stdio.h>
#include "LinkedList.h"


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
}

