#include <stdio.h>
#include "LinkedList.h"
#include <stack>

using namespace std;

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


