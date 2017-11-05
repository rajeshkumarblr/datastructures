#include <stdio.h>
#include "LinkedList.h"
#include <stack>

using namespace std;


bool LinkedList::isPalindrome() {

    if (head == NULL) {
        return false;
    }
    stack<int> st;
    bool isPalindrome = false;
    Node* middleNode = getMiddleNode();

    Node* node = head;
    while (node != middleNode) {
        if (node) {
            st.push(node->data);
        }
        node = node->next;
    }

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

#if 0
int main() {
    Node<char>* head = NULL;
    string str = "abcdba";
    LinkedList<char> myList(str);
    myList.printList();

    if (myList.isPalindrome()) {
        cout << str << " is a palindrome \n";
    } else {
        cout << str << " is NOT a palindrome \n";
    }

    Node<char>* mid = myList.getMiddleNode();
    if (mid) {
        cout << "middle node:" << mid->data << endl;
    }

    LinkedList<int> list;
    list.addNode(10);
    list.addNode(20);
    list.addNode(30);
    list.addNode(40);
    list.addNode(50);
    
    list.printList();
    if (list.isLoopDetected()) {
        cout << "Loop detected \n";
    } else {
        cout << "Loop NOT detected \n";
    }
    list.createLoop();
    if (list.isLoopDetected()) {
        cout << "Loop detected \n";
    } else {
        cout << "Loop NOT detected \n";
    }
    //list.printList();

}
#endif
