#include <iostream>
#include "arrayops.h"
#include <stack>
#include <vector>
#include "dsutils.h"

using namespace std;

int* arrangeMinMaxCopy(int* arr, int size) {
	int *newarr = new int[size];
	if (newarr != NULL) {
		int j = size -1;	
		int k = 0;
		for (int i= 0; i<size; i++) {
			if ((i%2)==0) {
				newarr[i] = arr[j--];
			} else { 
				newarr[i] = arr[k++];
			}
		}
	}
	return newarr;
}

/* input:10,20,30,40,50,60,70,80,90,100
 * rearranged:100,10,90,20,80,30,70,40,60,50 */
void arrangeMinMax(int* arr, int size) {
	int mid = size/2;
	std::stack<int> st;
	
	for (int i= (size%2)?mid+1:mid; i<size; i++) {
		st.push(arr[i]);
	}
	for (int i=size-1;i>=1;i-=2) {
		arr[i]=arr[(i-1)/2];
	}
	for (int i=0; i<size;i+=2) {
		arr[i] = st.top();
		st.pop();
	}
}

/* input:   10,20,30,40,50,60,70,80,90,100
 * swapped: 20,10,40,30,60,50,80,70,100,90 */
void swapAlternate() {
	if (n < 2) {
	  return;
	}
	int tmp;
	for (int i=0; i<n-1; i+=2) {
		int tmp=arr[i];
		arr[i]=arr[i+1];
		arr[i+1] = tmp;
	}
}

void reverseArrayDriver() {
	reverseArray(arr,n);
	printArray("reversed",arr,n);
}

static vector<string> menuoptions =  {
	"Return to main menu..",
	"Arrange Elements in Min/Max pairs",
	"Swap Alternate Elements",
	"Reverse Array"
};

void arrangeMinMaxDriver() {
	//arrangeMinMax(arr,n);
	int* tmp = arrangeMinMaxCopy(arr,n);
	delete[] arr;
	arr = tmp;
	
}

void arrangeArrayDriver() {
	int choice;
	do {
		printArrayDriver();
		cout << ("  Rearrange Menu:\n");
		app->displayMenu(menuoptions);
		cout << "Enter your choice:";
		cin >> choice;
		switch(choice) {
			case 0:
				return;
			case 1:
				arrangeMinMaxDriver();
				printArray("Arranged in Min Max:",arr,n);
				break;
			case 2:
				swapAlternate();
				printArray("Swapped Alternate:",arr,n);
				break;
			case 3:
				reverseArrayDriver();
				printArray("Reversed:",arr,n);
				break;
			default:
				continue;
		}
		
	} while (choice != 0);

}

