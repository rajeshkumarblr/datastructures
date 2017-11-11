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
		//bool isStringList;

    public:
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
		
        inline LinkedList() {
            head = NULL;
        }
        LinkedList(int min, int max, int incr);
        LinkedList(std::string& str);
        //LinkedList(int num, ...);
		LinkedList(int val);
        LinkedList(int arr[], int size);
        LinkedList(LinkedList& list) {
            this->head = list.getHead();
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

        void printList(bool isChar = false);
        void printList(int cnt);
        void printList(Node* head);
		
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
		
		LinkedList* addList(LinkedList* list2);

};

extern LinkedList* list;

void createListDriver();
LinkedList* createListDriverHelper();
void mergeListDriver();

void createLoopDriver();
void checkLoopDriver();

void reverseListDriver();
void checkPalindromeDriver();
void swapAdjacentNodesDriver();
void addListDriver();

#endif
