#include <iostream>
#include "arrayops.h"
#include "dsutils.h"

using namespace std;

void rotateArray(int arr[] , int n, int x) {
	for (int j=0;j<x;j++) {
		int tmp= arr[n-1];
		for (int i=n-2;i>=0;i--) {
		  arr[i+1] = arr[i];
		}
		arr[0] = tmp;
	}
}

void rotateArrayDriver() {
	int shift;
	cout << "Enter the number of times to rotate array:";
	cin >> shift;	
	rotateArray(arr, n,shift);	
	printArray("rotated array",arr,n);
}

