#include  "LinkedList.h"

void LinkedList::mergeList(LinkedList* list2)
{
    Node* tmp1 = head;
    Node* tmp2 = list2->getHead();

    // If first list is empty
    if (tmp1 == NULL) {
        *this = *list2;
        return;
    }

    Node* prev = NULL;
    while (tmp1 && tmp2) {
        prev = NULL;
        if (tmp1->data <= tmp2->data) {
            while (tmp1 && tmp1->data <= tmp2->data) {
                prev = tmp1;
                tmp1 = tmp1->next;
            }
            prev->next = tmp2;
        }else {
            while (tmp2 && tmp2->data <= tmp1->data) {
                prev = tmp2;
                tmp2 = tmp2->next;
            }
            prev->next = tmp1;
        }
    }
}

Node* mergeListRecursive(Node* list1, Node* list2) {
  if (list1 == NULL) return list2;
  if (list2 == NULL) return list1;

  if (list1->data < list2->data) {
    list1->next = mergeListRecursive(list1->next, list2);
    return list1;
  } else {
    list2->next = mergeListRecursive(list2->next, list2);
    return list2;
  }
}

void mergeList(Node* list2Head) {
	mergeListRecursive(list1->getHead,list)
}


void mergeListDriver() {	
	LinkedList* list2 = createListDriverHelper(true);
	cout << "Enter your choice of method for merge lists" << endl;
	cout << "1. Recursive Method" << endl;
	cout << "2. Itertive Method" << endl;
	cin >> choice;
	switch (choice) {
		case 1:
			
		
	}
	//list->mergeList(list2);	
}


