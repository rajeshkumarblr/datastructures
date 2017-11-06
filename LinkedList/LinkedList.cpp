#include "LinkedList.h"

LinkedList::LinkedList(int min, int max, int incr):LinkedList() {
    for (int i=min; i<=max; i+= incr) {
        addNode(i);
    }
}

LinkedList::LinkedList(std::string& str):LinkedList() {
	isStringList = true;
    for (unsigned int i=0; i<str.size();i++) {
        addNode(str[i]);
    }
}

LinkedList::LinkedList(int num, ...):LinkedList() {
    va_list arguments;                     

    va_start ( arguments, num );           
    for ( int x = 0; x < num; x++ )        
    {
        int val = va_arg ( arguments, int ); 
        addNode(val);
    }
    va_end ( arguments );                  // Cleans up the list
}

LinkedList::LinkedList(int arr[], int size):LinkedList() {
    for (int i=0; i<size;i++) {
        addNode(arr[i]);
    }
}


void LinkedList::addNode(int data) {
    Node* tmp = new Node(data);
    if (head == NULL) {
        head = tmp;
    } else {
        Node* tail = getTail();
        tail->next = tmp;
    }
}


Node* LinkedList::getNodeFromEnd(int n) 
{
    Node* front = head;

    for (int i=0; front && i<n; i++) {
        front = front->next;
    }

    if (front == NULL) {
        return NULL;
    }

    Node* prev = front;

    while (front) {
        prev = front;
        front = front->next;
    }

    return prev;
}

Node* LinkedList::getMiddleNode() {
    if (head == NULL) {
        return NULL;
    } else if (head->next == NULL) {
        return head;
    }

    Node* slowPtr = head;
    Node* fastPtr = head;
    while (fastPtr) {
        slowPtr = slowPtr->next;
        fastPtr = fastPtr->next;
        if (fastPtr) {
            fastPtr = fastPtr->next;
        }
    }
    return slowPtr;
}

void LinkedList::printList() {
    Node* node = head;
    while (node) {
		if (isStringList) {
			cout<< (char) node->data;
		} else {
			cout<< node->data;
		}
		
		if (node->next == head) {
			cout << "Loop detected" << endl;
			break;
		}
		
        if (node->next) {
            cout << "->";
        }
        node = node->next;
    }
    cout << endl;
}

void LinkedList::printList(int cnt) {
    Node* node = head;
    int i = 0;
    while (node && (i < cnt)) {
        cout<< node->data;
        if (node->next) {
            cout << "->";
        }
        node = node->next;
		i++;
    }
    cout << endl;
}


void LinkedList::deleteNode(int data) {
    if (head == NULL) {
        return;
    }
    Node* prev = NULL;
    Node* tmp = head;
    while (tmp) {
        if (tmp->data == data) {
            break;
        }
        tmp = tmp->next;
    }
    if (tmp && tmp->data == data) {
        if (prev) {
            delete tmp;
            prev->next = tmp->next;
        } else {
            delete head;
            head = head->next;
        }
    }
}

