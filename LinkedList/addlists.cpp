#include "LinkedList.h"
#include <stack>

static Node* addLinkedList(Node* list1, Node* list2) {
	
	stack<Node*> stack1;
	Node* tmp = list1;
	while (tmp) {
		stack1.push(tmp);
		tmp = tmp->next;
	}
	stack<Node*> stack2;
	Node* nd = list2;
	while (nd) {
		stack2.push(nd);
		nd = nd->next;
	}
	
	Node* tmp1 = stack1.top();
	Node* tmp2 = stack2.top();
	Node* prev = NULL;
	Node* node = NULL;
	int carry = 0;
	while (tmp1 || tmp2) {
		int total = carry + (tmp1 ? tmp1->data : 0) + ((tmp2 ? tmp2->data : 0));
		carry = (total >= 10) ? 1:0;
		Node* node = new Node(total % 10);
		node->next = prev;
		stack1.pop();
		if (!stack1.empty()) {
			tmp1 = stack1.top();			
		} else {
			tmp1 = NULL;
		}
		stack2.pop();
		if (!stack2.empty()) {
			tmp2 = stack2.top();
		} else {
			tmp2 = NULL;
		}
		prev = node;
	}
	if (carry) {
		node = new Node(carry);
		node->next = prev;
	}
	return node;
}

LinkedList* LinkedList::addList(LinkedList* list2) {
	head = addLinkedList(getHead(), list2->getHead());
}

LinkedList* createListDriverHelper();

void addListDriver() {
	cout << "Add two Linked lists together:" << endl;
	LinkedList* list2 = createListDriverHelper();
	list2->printList("second list");
	list->addList(list2);
}