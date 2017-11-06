#include <stdio.h>
#include "LinkedList.h"

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

