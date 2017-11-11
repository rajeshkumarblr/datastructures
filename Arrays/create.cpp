#include <iostream>
#include "arrayops.h"
#include "dsutils.h"

using namespace std;

int createArray(int** arr, int st, int end, int incr) {
	int size =  (end - st) / incr + 1;
	if (*arr) {
		delete[] arr;
	}
	*arr = new int[size];
	int val = st;
	for (int i=0; i<size; i++) {
		(*arr)[i]= val;
		val += incr;
	}
	return size;
}

void createArrayDriver() {
	int start, end, incr;
	cout << "Enter the range of array (first last step)" << endl;
	cin >> start >> end >> incr;
	clearinput();
	n = createArray(&arr,start, end,incr);
}
