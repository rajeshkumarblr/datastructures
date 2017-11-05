#include <stdio.h>
#include "LinkedList.h"

Node* reverseList(Node* node) {
    Node* prev = NULL;
    Node* tmp;
    while (node) {
        tmp = node->next;
        node->next = prev;
        prev = node;
        node = tmp;
    }
    return prev;
}

#if 0

Node* head;
int main() {

    head = new Node(1);
    Node* tail = head;
    Node* tmp;
    for (int i=2; i<10; i++) {
        tmp = new Node(i);
        tail->next = tmp;
        tail = tmp;
    }
    printList(head);
    reverseList(head);
    printList(head);

}
#endif
