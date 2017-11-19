#include "LinkedList.h"
#include "dsutils.h"
#include <sstream>
using namespace std;

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

LinkedList* createListByValues() {
	int num;
	cout << "Create List with specified elements:" << endl;
	cout << "Enter the number of elements:";
	cin >> num;
	int val;
	LinkedList* newList = new LinkedList();
	for (int i=0; i< num; i++) {
		cout << "Enter the next element(" << i << ")";
		cin >> val;
		newList->addNode(val);
	}
	return newList;
}

LinkedList* createListRange(int min, int max, int incr) {
	return new LinkedList(min, max, incr);
}

LinkedList* createListRandom(int num, int min, int max) {
	srandom(time(NULL));
	double mul = ((max - min) / (double) RAND_MAX);
	LinkedList *newList = new LinkedList();
	for (int i=0; i< num; i++) {
		int val = min + (rand() * mul);
		newList->addNode(val);
	}
	return newList;
}

LinkedList* createListsRandomDriver() {
	int start, end, num;
	cout << "Create List with random elements:" << endl;
	cout << "Enter the number of elements:";
	cin >> num;
	cout << " Enter the range (start end):";
	cin >> start >> end;
	cout << "Entered range is: (" << start << " - " << end << "). number of elements: " << num << endl;
	LinkedList* newlist = createListRandom(num,start, end);
	return newlist;
}

LinkedList* createListRangeDriver() {
	int start, end, incr;
	cout << "Create List by range:" << endl;
	cout << " Enter the range (start end):";
	cin >> start >> end;
	cout << " Enter the increment by value:";
	cin >> incr;
	cout << " Entered range is: (" << start << " - " << end << "). increment by: " << incr << endl;
	LinkedList* newlist = createListRange(start, end, incr);
	return newlist;
}

LinkedList* createListByStringDriver() {
	string str;
	cout << "Create List by a string:" << endl;
	cout << "Enter the string for linked list:";
	cin >> str;
	LinkedList *newList = new LinkedList(str);
	return newList;
}

LinkedList* createListByNumbersDriver() {
	int num;
	cout << "Create List with specific elements:" << endl;
	cout << "Enter the number of elements:";
	cin >> num;
	LinkedList *newList = new LinkedList();
	int val;
	for (int i=0; i< num; i++) {
		cout << "Enter the next element(" << i << ")";
		cin>> val;
		newList->addNode(val);
	}
	return newList;
}

static vector<string> menuoptions = {
    "Return to Main menu...(Press x for Exit)", 
	"Create List By Range of numbers",
	"Create List by string",
	"Create List by Number list",
	"Create List by digits of number",
	"Create List by random numbers"
};

LinkedList* createListDriverHelper() {
	char choice;
	LinkedList* newList = NULL;
	do {
		cout << ("\n  Create Menu:\n");
		app->displayMenu(menuoptions);
		cout << "Enter your choice:";
		cin >> choice;
		app->clearinput();
		switch(choice) {
			case '0':
				return NULL;
			case '1':
				newList = createListRangeDriver();
				break;
			case '2':
				newList = createListByStringDriver();
				break;
			case '3':
				newList = createListByValues();
				break;
			case '4':
				newList = createListByNumbersDriver();
				break;
			case '5':
				newList = createListsRandomDriver();
				break;
			case 'x':
				exit(0);
				break;
			default:
				cout << "unrecognized input. please try again \n";
				continue;
		}
	} while (newList == NULL);
	return newList;
}

void createListDriver() {
	list = createListDriverHelper();
	list->printList("created List");
}
