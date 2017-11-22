#include "LinkedList.h"



void LinkedList::addNode(int data) {
    Node* tmp = new Node(data);
    if (head == NULL) {
        head = tmp;
    } else {
        Node* tail = getTail();
        tail->next = tmp;
    }
}



void LinkedList::printList(string str) {
	cout << str << ":";
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

