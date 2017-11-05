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
    Node* nextNext;
    while (node && node->next) {
        nextnode = node->next->next;
        if (prev) {
            prev->next = node->next;
        }
        node->next->next = node;
        prev = node;
        node=nextnode;
    }

    if (prev) {
        prev->next = NULL;
    }   

}

int main() {

    int arr[] = {1,2,3,4,5,6,7,8};

    LinkedList list(arr,SIZE(arr));
    Node* node = list.getMiddleNode();
    cout << "Middle node:" << node->data << endl;

    list.swapAdjacentNodes();
    list.printList();
}



