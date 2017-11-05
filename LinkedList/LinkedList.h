#ifndef LINKED_LIST_H
#define LINKED_LIST_H 1

#include <string>
#include <iostream>
#include <stdarg.h>

using namespace std;

#define SIZE(arr) sizeof(arr)/sizeof(arr[0])

struct Node {
    int data;
    Node* next;
    Node(int data) {
        this->data = data;
        next = NULL;
    }
};

class LinkedList
{
    private:
        Node *head;

        inline Node* getHead() {
            return head;
        }
        inline Node* getTail() {
            Node* tail = head;
            while (tail && tail->next) {
                tail = tail->next;
            }
            return tail;
        }
    public:
        inline LinkedList() {
            head = NULL;
        }
        LinkedList(int min, int max, int incr);
        LinkedList(std::string& str);
        LinkedList(int num, ...);
        LinkedList(int arr[], int size);
        LinkedList(LinkedList& list) {
            this->head = NULL;
        }
        void operator = (LinkedList& list) {
            this->head = list.head;
        }

        void addNode(int data);
        void deleteNode(int data);

        void printList();
        void printList(int cnt);
        Node* getMiddleNode();
        Node* getNodeFromEnd(int n);

        /*Palindrome functions*/
        bool isPalindrome();
        Node* reverseList();

        /*Loop functions*/
        void createLoop();
        bool isLoopDetected();

        /* Merge functions*/
        void mergeList(LinkedList& list2);
        void swapAdjacentNodes();

};


#endif
