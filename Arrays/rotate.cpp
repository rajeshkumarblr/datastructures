#include <iostream>
#include "arrayops.h"
#include "dsutils.h"

using namespace std;

void rotateArrayDriver() {
	int shift;
	cout << "Enter the number of times to rotate array \n";
	cin >> shift;	
	clearinput();
	rotateArray(arr, n,shift);	
	printArray("rotated",arr,n);
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
	int ind = findMinElementInRotatedSortedArray(arr, n);
	cout << "min index of the array:" << ind << endl;
}
