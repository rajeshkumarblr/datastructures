#include  "LinkedList.h"

Node* mergeListIterative(Node* list1, Node* list2)
{
    Node* dummy = new Node(0);
	Node* tmp = dummy;
    while (tmp) {
		// If first list is empty, choose second list
		if (list1 == NULL) {
			tmp->next = list2;
			break;
		}		
		// If second list is empty, choose first list
		if (list2 == NULL) {
			tmp->next = list1;
			break;
		}
        if (list1->data < list2->data) {
			tmp->next = list1;
			list1 = list1->next;
        } else {
			tmp->next = list2;
			list2 = list2->next;
        }
		tmp = tmp->next;
    }
	tmp= dummy->next;
	delete dummy;
	return tmp;
}

Node* mergeListRecursive(Node* list1, Node* list2) {
  if (list1 == NULL) return list2;
  if (list2 == NULL) return list1;

  if (list1->data < list2->data) {
    list1->next = mergeListRecursive(list1->next, list2);
    return list1;
  } else {
    list2->next = mergeListRecursive(list2->next, list1);
    return list2;
  }
}

void LinkedList::mergeList(LinkedList* other,bool isIterative)
{
    Node* list1 = head;
    Node* list2 = other->getHead();

	if (isIterative) {
		head = mergeListIterative(list1, list2);		
	} else {
		head = mergeListRecursive(list1,list2);	
	}
}

void mergeListDriver() {
	int choice;
	LinkedList* list2 = createListDriverHelper(true);
	cout << "Created list:" << endl;
	list2->printList();
	cout << "  Enter your choice of method for merge lists" << endl;
	cout << "  1. Recursive Method" << endl;
	cout << "  2. Itertive Method" << endl;
	cin >> choice;
	switch (choice) {
		case 1:
			list->mergeList(list2,false);
			break;
		case 2:
			list->mergeList(list2,true);
			break;			
	}
}


