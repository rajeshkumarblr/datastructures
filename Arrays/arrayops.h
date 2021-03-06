#ifndef _ARRAYOPS_H
#define _ARRAYOPS_H 1

#define SIZE(arr) (sizeof(arr)/sizeof(arr[0]))

void createArray(int st, int end, int incr);

int* arrangeMinMaxCopy(int* arr, int size);
void arrangeMinMax(int* arr, int size);
void swapAlternate(int* arr, int size);

void rotateArray(int arr[] , int n, int x);
void printArray(const char* msg, int arr[], int n);
int binarySearchSortedArray(int a[], int n, int val);
int findMinElementInRotatedSortedArray(int a[], int n);
int binarySearchSortedRotatedArray(int a[], int n, int val);
void reverseArray(int a[], int n);
bool isRotatedSortedArray(int a[], int n);
void createArrayRandom(int num, int min, int max);

void createArrayDriver();
void searchArrayDriver();
void rotatedSearchArrayDriver();
void rotateArrayDriver();
void findMinElementDriver();
void printArrayDriver();

extern int* arr;
extern int n;

#endif