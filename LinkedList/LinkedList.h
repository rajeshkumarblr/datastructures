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
		bool isStringList;

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
			isStringList = false;
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

		inline int getSize() {
			int size = 0;
			Node* node = head;
            while (node) {
                node = node->next;
				size++;
            }
			return size;
		}
		
        void addNode(int data);
        void deleteNode(int data);

        void printList();
        void printList(int cnt);
        Node* getMiddleNode();
        Node* getNodeFromEnd(int n);

        /*Palindrome functions*/
        bool isPalindrome();

        /*Loop functions*/
        void createLoop(int elem);
        bool isLoopDetected();

        /* Merge functions*/
        void mergeList(LinkedList* list2, bool isIterative= true);
		
        void swapAdjacentNodes();
		
		void reverseList();
		friend void mergeListDriver();

};

extern LinkedList* list;

LinkedList* createListDriverHelper(bool isMergeList=true);
void createListDriver();
void mergeListDriver();

void createLoopDriver();
void checkLoopDriver();

#endif
