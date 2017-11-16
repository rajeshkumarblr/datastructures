#include "arrayops.h"
#include <iostream>
#include "dsutils.h"

using namespace std;

// val: 10 20 30 40 50 60 70 80
// ind:  1  2  3  4  5  6  7  8

int binarySearchSortedArray(int a[], int n, int val) {
	int index = -1;
	int st = 0;
	int end = n-1;
	int mid;
	while (st <= end) {
		mid = (st + end) / 2;
		if (val == a[mid]) {
			index = mid;
			break;
		} else if (a[mid] < val) {
			st = mid + 1;
		} else {
			end  = mid -1;
		}
	} 
	return index;
}


/** 
 * Objective: Find an element in a rotated sorted array using binary search
 * Example:
 * input: 8 9 1 2 3 4 5 6 7
 * val:  6
 *return index of 6: 7 
 * Speed: O(log(n))
 **/
int binarySearchSortedRotatedArray(int a[], int n, int val) {
	int index = -1;
	// Find the min element in rotated search array
	int pivot = findMinElementInRotatedSortedArray(a, n);
	if (pivot < 0) {
		return binarySearchSortedArray(a, n, val);
	}
	/* 
	 * Consider 8 9 1 2 3 4 5 6 7
	 *     Found  pivot:(1)       
	 * If the given value is between(1,7) val is in right part of array from pivot.
	 * If the value is between(8,9) val is in left part of array before pivot.
	 * 
	 */
	if ((val >= a[pivot]) && (val <= a[n-1])) {
		index = pivot + binarySearchSortedArray(a+pivot,n-pivot,val);		
	} else if ((val >= a[0]) && (val <= a[pivot-1])) {
		index = binarySearchSortedArray(a,pivot,val);		
	}
	return index;
}

/** helper function for findMinElementInRotatedSortedArray */
bool isRotatedSortedArray(int a[], int n) {
	if (a[0] > a[n-1]) {
		return true;
	} else {
		return false;
	}	
}

void searchElementDriver() {
	int val;
	cout << "Enter the element to search:" ;
	cin >> val;
	int ind;
	bool isRotated = isRotatedSortedArray(arr,n);
	if (isRotated) {
		cout << "Searching in Rotated array" << endl;
		ind = binarySearchSortedRotatedArray(arr,n,val);
	} else {
		ind = binarySearchSortedArray(arr,n,val);		
	}
	cout << "value: " << val << " is ";
	if (ind >= 0 ) {
		cout << "found in" << (isRotated ? " Rotated " : "") << "array at index: " << ind << endl;
	} else {
		cout << "NOT found in array" << endl;
	}
}
/** 
 * Objective: Find the pivot element of a rotated sorted array using binary search
 * Example:
 * input: 8 9 1 2 3 4 5 6 7
  * return index of the min element 1: 2
  * or return -1 if the array is not rotated.
 * Speed: O(log(n))
 **/

int findMinElementInRotatedSortedArray(int a[], int n) {
	// First check if the array is really rotated (assuming the array is sorted already)
	if (!isRotatedSortedArray(a, n)) {
		return -1;
	}
	/* Dry run:
	 *  arr: 70  80  10    20     30 40 50 60
	 *    (l) 0  1    2    3(m)    4  5  6  7 (r)
	 *    (l) 0  1(m) 2    3(r)
	 *        0  1    2(l) 3(r)
	 *  0  1   
	 */

	int l = 0;
	int r = n-1;
	while (a[l] > a[r]) {
		int m = (l + r) / 2;
		if (a[m] > a[r]) {
			l = m + 1;
		} else {
			r  = m;
		}
	}
	return l;
}

void findMinElementDriver() {
	int ind;
	if (isRotatedSortedArray(arr,n)) {
		ind = findMinElementInRotatedSortedArray(arr, n);
	} else {
		ind = 0;
	}
	
	cout << "min value: " << arr[ind] << " found at index:" << ind << endl;
}

static vector<string> menuoptions =  {
	"Return to main menu..",
	"Search Element",
	"Find Minimum element",
};


void searchArrayDriver() {
	int choice;
	do {
		printArrayDriver();
		cout << ("  Search Menu:\n");
		app->displayMenu(menuoptions);
		cout << "Enter your choice:";
		cin >> choice;
		switch(choice) {
			case 0:
				return;
			case 1:
				searchElementDriver();
				break;
			case 2:
				findMinElementDriver();
				break;
			default:
				continue;
		}
		
	} while (choice != 0);
}


