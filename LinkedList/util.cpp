#include <stdio.h>
#include <string.h>
#include "LinkedList.h"

void printList(Node* node) {
    while (node) {
        printf("%d",node->data);
        if (node->next) {
            printf("->");
        }
        node = node->next;
    }
    printf("\n");
}

void printListStr(Node* node) {
    while (node) {
        printf("%c",node->data);
        if (node->next) {
            printf("->");
        }
        node = node->next;
    }
    printf("\n");
}


Node* addNode(Node** head,int data) {
    Node* tmp = new Node(data);

    Node* tail = *head;
    while (tail && tail->next) {
        tail = tail->next;
    }

    if (*head == NULL) {
        *head = tmp;
    } else {
        tail->next = tmp;
    }
	return tmp;
}

void createList(Node** head, int min, int max, int incr) {
    for (int i=min; i<=max; i+= incr) {
        addNode(head,i);
    }
}

void createList(Node** head, const char* str) {
    if (str) {
        int len = strlen(str);
        if (len > 0) {
            char ch = str[0];
            *head = new Node(ch);
            int i = 1;
            Node *prev = *head;
            while (i < len) {
                ch = str[i];
                Node* tmp = new Node(ch);
                prev->next = tmp;
                prev = tmp;
                i++;
            }
        }
    } else {
        *head = NULL;
    }
}

int getListSize(Node* head) {

    int size = 0;
    Node* tmp = head;
    while (tmp != NULL) {
        size++;
        tmp = tmp->next;
    }
    return size;
}

Node* getNthNodeFromEnd(Node* head, int n) 
{
    Node* tmp = head;

    for (int i=0; tmp && i<n; i++) {
        tmp = tmp->next;
    }

    Node* prev = tmp;
    Node* ptr = prev;

    while (ptr) {
        prev = ptr;
        ptr = ptr->next;
    }

    return prev;
}

