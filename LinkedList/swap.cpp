#include <stdio.h>
#include "LinkedList.h"

void LinkedList::swapAdjacentNodes() {
    if (head == NULL) {
        return;
    }
    Node* node = head;
    head = node->next;
    Node* prev= NULL;

    Node* nextnode;
    while (node) {
        if (prev) {
            prev->next = node->next;
        }
		if (node->next) {
			nextnode = node->next->next;
			
		}
        node->next->next = node;
        prev = node;
        node=nextnode;
    }

    if (prev) {
        prev->next = NULL;
    }   

}




