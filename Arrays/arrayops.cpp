#include <iostream>
#include <stdio.h>
#include <stdlib.h>
#include <stack>
#include "arrayops.h"

using namespace std;


void printArray(const char* msg, int arr[], int n) {
	if (n<0) {
		printf("empty array n is %d \n", n);
		return;
	}
	printf("%s: ",msg);
	for (int i=0;i<n-1; i++) {
		printf("%d,",arr[i]);
	}
	printf("%d",arr[n-1]);
	cout << endl;
}

// 10 20 30 40 50 60 
// 60 50 40 30 20 10
void reverseArray(int a[], int n) {	
	int mid = n/2;
	for (int i=0; i<mid; i++) {
		int tmp=a[i];
		a[i] = a[n-1-i];
		a[n-1-i]=tmp;
	}
}