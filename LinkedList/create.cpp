#include "LinkedList.h"
#include "dsutils.h"
using namespace std;

LinkedList::LinkedList(int min, int max, int incr):LinkedList() {
    for (int i=min; i<=max; i+= incr) {
        addNode(i);
    }
}

LinkedList::LinkedList(std::string& str):LinkedList() {
    for (unsigned int i=0; i<str.size();i++) {
        addNode(str[i]);
    }
}

/*LinkedList::LinkedList(int num, ...):LinkedList() {
    va_list arguments;                     

    va_start ( arguments, num );           
    for ( int x = 0; x < num; x++ )        
    {
        int val = va_arg ( arguments, int ); 
        addNode(val);
    }
    va_end ( arguments );                  // Cleans up the list
}*/

LinkedList::LinkedList(int val):LinkedList() {
	int digit;
	Node* prev = NULL;
	Node* tmp = NULL;
	while (val) {
		digit = val % 10;
		prev = tmp;
		tmp = new Node(digit);
		tmp->next = prev;
		val= val / 10;
	}
	head = tmp;
}

LinkedList::LinkedList(int arr[], int size):LinkedList() {
    for (int i=0; i<size;i++) {
        addNode(arr[i]);
    }
}

LinkedList* createListDriverHelper() {
	int choice;
	cout << "  Enter the list create method" << endl;
	cout << "  1. Create List By Range" << endl;
	cout << "  2. Create List By String" << endl;
	cout << "  3. Create List By number list" << endl;
	cout << "  4. Create List By digits of number" << endl;
	cin >> choice;
	clearinput();
	LinkedList* newlist;
	switch (choice) {
		case 1: {
			int min, max, incr;
			cout << "  Enter the range of array (first last step)" << endl;
			cin >> min >> max >> incr;
			clearinput();
			newlist = new LinkedList(min,max,incr);
			break;
		}
		case 2: {
			string str;
			cout << "  Enter the string to create the list" << endl;
			cin >> str;
			clearinput();
			newlist = new LinkedList(str);
			break;			
		}
		case 3: {
			int num;
			cout << "  Enter the number of elements in list" << endl;
			cin >> num;
			int* elements = new int[num];
			for (int i=0; i<num; i++) {
				cout << "Enter element no: " << i << endl; 
				cin >> elements[i];
			}
			newlist = new LinkedList(elements, num);
			clearinput();
			break;			
		}
		case 4: {
			int num;
			cout << "Enter the number to create list of digits" << endl;
			cin >> num;
			newlist = new LinkedList(num);
			clearinput();
			break;	
		}
	}
	return newlist;
}

void createListDriver() {
	list = createListDriverHelper();
}
