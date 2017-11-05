#ifndef LINKED_LIST_H
#define LINKED_LIST_H 1

#include <string>
#include <iostream>
#include <stdarg.h>

using namespace std;

template <class T>
class Node {
public:
    T data;
    Node<T>* next;
    Node(T data) {
        this->data = data;
        next = NULL;
    }
};

template <class T> 
class LinkedList
{
    private:
        Node<T> *head, *tail;
        int size;

    public:
        LinkedList() {
            size = 0;
            tail = head = NULL;
        }
        LinkedList(T min, T max, T incr):LinkedList<T>() {
            for (T i=min; i<=max; i+= incr) {
                addNode(head,i);
            }
        }
        LinkedList(std::string& str):LinkedList<T>() {
            for (int i=0; i<str.size();i++) {
                addNode(str[i]);
            }
        }

        LinkedList(int num, ...):LinkedList<T>() {
            va_list arguments;                     

            /* Initializing arguments to store all values after num */
            va_start ( arguments, num );           
            /* Sum all the inputs; we still rely on the function caller to tell us how
             * many there are */
            for ( int x = 0; x < num; x++ )        
            {
                T val = va_arg ( arguments, T ); 
                addNode(val);
            }
            va_end ( arguments );                  // Cleans up the list
        }

        void addNode(T data) {
            Node<T>* tmp = new Node<T>(data);
            if (head == NULL) {
                head = tmp;
            } else {
                tail->next = tmp;
            }
            tail = tmp;
            size++;
        }

        void deleteNode(T data);

        void printList();

        int getSize() {
            return size;
        }
        Node<T>* getNodeFromEnd(int n);
        bool isPalindrome();
        Node<T>* reverseList();

        Node<T>* getMiddleNode();

        void createLoop();

        bool isLoopDetected();
        void mergeList(LinkedList<T> list2);

        Node<T>* getHead() {
            return head;
        }

};

template <class T> 
void LinkedList<T>::printList() {
    Node<T>* node = head;
    while (node) {
        cout<< node->data;
        if (node->next) {
            cout << "->";
        }
        node = node->next;
    }
    cout << endl;
}


template <class T> 
Node<T>* LinkedList<T>::getNodeFromEnd(int n) 
{
    Node<T>* front = head;

    for (int i=0; front && i<n; i++) {
        front = front->next;
    }

    if (front == NULL) {
        return NULL;
    }

    Node<T>* prev = head;

    while (front) {
        prev = prev->next;
        front = front->next;
    }

    return prev;
}

template <class T> 
void LinkedList<T>:: deleteNode(T data) {
    Node<T>* tmp = head;
    Node<T>* prev = NULL;
    bool isFound = false;
    while (tmp) {
        if (tmp->data == data) {
            isFound = true;
        }
    }
    if (isFound) {
        if (prev == NULL) {
            if (head->data == data) {
                head = head->next;
            }
            if (tail->data == data) {
                tail = tail->next;
            }
            delete tmp;
        } else {
            prev = prev->next;
        }
    }
}

template <class T> 
Node<T>* LinkedList<T>::getMiddleNode() {
    if (head == NULL) {
        return NULL;
    } else if (head->next == NULL) {
        return head;
    }

    Node<T>* slowPtr = head;
    Node<T>* fastPtr = head;
    while (fastPtr && fastPtr->next) {
        slowPtr = slowPtr->next;
        fastPtr = fastPtr->next;
        fastPtr = fastPtr->next;
    }
    return slowPtr;
}

template <class T>
void LinkedList<T>::createLoop() {
    srand(time(NULL));
    int rand = random() % size;
    Node<T>* loopNode = getNodeFromEnd(rand);
    tail->next = loopNode;
}

template <class T>
bool LinkedList<T>::isLoopDetected() {
    if (head == NULL) {
        return false;
    }
    bool isLoopFound = false;
    Node<T> *slow = head;
    Node<T>* fast = head->next;
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

#endif
