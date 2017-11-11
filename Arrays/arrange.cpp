#include <iostream>
#include "arrayops.h"
#include "dsutils.h"

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

/* input:   10,20,30,40,50,60,70,80,90,100
 * swapped: 20,10,40,30,60,50,80,70,100,90 */
void swapAlternate(int* a, int n) {
	if (n < 2) {
	  return;
	}
	for (int i=0; i<n-1; i+=2) {
		int tmp=a[i];
		a[i]=a[i+1];
		a[i+1] = tmp;
	}
}

void reverseArrayDriver() {
	reverseArray(arr,n);
	printArray("reversed",arr,n);
}

void arrangeMinMaxDriver() {
	//arrangeMinMax(arr,n);
	int* tmp = arrangeMinMaxCopy(arr,n);
	delete[] arr;
	arr = tmp;
	printArray("rearranged",arr,n);
}

void swapAlternateElementsDriver() {
	swapAlternate(arr,n);
	printArray("swapped",arr,n);
}
