#include <stdio.h>
#include <stdlib.h>
#include <stack>
#include "arrayops.h"

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

void rotateArray(int arr[] , int n, int x) {
	for (int j=0;j<x;j++) {
		int tmp= arr[n-1];
		for (int i=n-2;i>=0;i--) {
		  arr[i+1] = arr[i];
		}
		arr[0] = tmp;
	}
}

void printArray(const char* msg, int arr[], int n) {
	if (n<0) {
		printf("empty array n is %d \n", n);
		return;
	}
	printf("%s:",msg);
	for (int i=0;i<n-1; i++) {
		printf("%d,",arr[i]);
	}
	printf("%d",arr[n-1]);
	printf("\n");
}

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
inline bool isRotatedSortedArray(int a[], int n) {
	if (a[0] > a[n-1]) {
		return true;
	} else {
		return false;
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

// 10 20 30 40 50 60
// 60 50 40 30 20 10
void reverseArray(int a[], int n) {	
	int mid = n/2;
	int j = n -1;
	for (int i=0; i<mid; i++) {
		int tmp=a[i];
		a[i] = a[j];
		a[j--]=tmp;
	}
}