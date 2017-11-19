#include <stdio.h>
#include "LinkedList.h"
#include <vector>
#include "dsutils.h"

using namespace std;
void LinkedList::createLoop(int elem) {
    Node* node = head;
	int i = 0;
	while (node) {
		i++;
		if (i == elem) {
			node->next = head;
			break;
		}
		node = node->next;
	}
}

bool LinkedList::isLoopDetected() {
    if (head == NULL) {
        return false;
    }
    bool isLoopFound = false;
    Node *slow = head;
    Node* fast = head->next;
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

void createLoopDriver() {
	int elem;
	int size = list->getSize();
	cout << "Enter the element to create a loop (max: "  << size << ")" << endl;
	cin >> elem;
	elem = elem % size;
	list->createLoop(elem);
	cout << "Loop created at element " << elem << endl;
}

void checkLoopDriver() {
	if (list->isLoopDetected()) {
		cout << "Loop IS detected in List!" << endl;
	} else {
		cout << "Loop NOT detected in List!" << endl;
	}
}

/**
 * Input a->b->c->b->a
 **/
bool LinkedList::isPalindrome() {
	bool isPalindrome = false;
    if (head == NULL) {
        return isPalindrome;
    }
    stack<int> st;

    Node* node = head;
    while (node != NULL) {
		st.push(node->data);
		node = node->next;
    }

	node = head;
    while (node != NULL) {
        if (st.top() != node->data) {
            break;
        }
        st.pop();
        node = node->next;
    }
    if (st.empty()) {
        isPalindrome = true;
    }
    return isPalindrome;
}

void checkPalindromeDriver() {
	if (list->isPalindrome()) {
		cout << "List is a Palindrome" << endl;
	} else {
		cout << "List is NOT a Palindrome" << endl;
	}
}

static vector<string> menuoptions = {
    "Return to Main menu...(Press x for Exit)", 
	"Create Loop in the list",
	"Check if there is a loop in the list",
	"Check if the list is a palindrome"
};

void LoopOperationsDriver() {
	char choice;
	do {
		cout << ("\n  Loop Menu:\n");
		app->displayMenu(menuoptions);
		cout << "Enter your choice:";
		cin >> choice;
		app->clearinput();
		switch(choice) {
			case '0':
				return;
			case '1':
				createLoopDriver();
				break;
			case '2':
				checkLoopDriver();
				break;
			case '3':
				checkPalindromeDriver();
				break;
			case 'x':
				exit(0);
				break;
			default:
				cout << "unrecognized input. please try again \n";
				continue;
		}
	} while (choice != 0);
}

