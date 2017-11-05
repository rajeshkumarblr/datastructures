#include  "LinkedList.h"


void LinkedList::mergeList(LinkedList& list2)
{
    Node* tmp1 = head;
    Node* tmp2 = list2.getHead();

    // If first list is empty
    if (tmp1 == NULL) {
        *this = list2;
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


#if 0
int main() {

    //int array1[] = {1,3,7,9,11};
    int array1[] = {1};
    int array2[] = {2,4,6,8,10,12};

    //LinkedList list1(array1, SIZE(array1));
    LinkedList list1;
    list1.printList();
    LinkedList list2(array2, SIZE(array2));
    list2.printList();

    list1.mergeList(list2);
    cout<< "Merged List:";
    list1.printList();
    
    return 0;
}

#endif

