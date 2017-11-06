#include "LinkedList.h"
#include "dsutils.h"
using namespace std;

LinkedList* createListDriverHelper(bool isMergeList) {
	int choice;
	cout << "  Enter the list create method" << endl;
	cout << "  1. Create List By Range" << endl;
	cout << "  2. Create List By String" << endl;
	cout << "  3. Create List By number list" << endl;
	cin >> choice;
	clearinput();
	LinkedList* list;
	switch (choice) {
		case 1: {
			int min, max, incr;
			cout << "  Enter the range of array (first last step)" << endl;
			cin >> min >> max >> incr;
			clearinput();
			list = new LinkedList(min,max,incr);
			break;
		}
		case 2: {
			string str;
			cout << "  Enter the string to create the list" << endl;
			cin >> str;
			clearinput();
			list = new LinkedList(str);
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
			list = new LinkedList(elements, num);
			clearinput();
			break;			
		}
	}
	return list;
}

void createListDriver() {
	list = createListDriverHelper(false);
}
