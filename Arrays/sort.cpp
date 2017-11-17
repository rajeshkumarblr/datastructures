#include <iostream>
#include "dsutils.h"
#include "arrayops.h"

using namespace std;

void swap(int& val1, int& val2) {
	int tmp = val1;
	val1 = val2;
	val2 = tmp;	
}

void bubbleSort() {
	int tmp;
	for (int i=0; i< (n-1); i++) {
		for (int j=i; j<n; j++) {
			if (arr[i]>arr[j]) {
				swap(arr[i], arr[j]);
			}
		}
	}
}

void selectionSort() {
	int tmp;
	for (int i=0; i< (n-1); i++) {
		int min = arr[i];
		int ind = i;
		for (int j=i; j<n; j++) {
			if (arr[j]<min) {
				ind = j;
				min = arr[j];
			}
		}
		if (i < ind) {
			swap(arr[i], arr[ind]);
		}
		//printArray("debug:",arr,n);
	}
}

void insertionSort() {
	int tmp;
	for (int i=1; i< n; i++) {
		int key = arr[i];
		int j= i-1	;
		while (j >= 0 && (arr[j]> key)) {
			arr[j+1] = arr[j];
			j--;
		}
		arr[j+1] = key;
		//printArray("debug:",arr,n);
	}
}

/* This function takes last element as pivot, places
   the pivot element at its correct position in sorted
    array, and places all smaller (smaller than pivot)
   to left of pivot and all greater elements to right
   of pivot */
int partition (int arr[], int low, int high)
{
    int pivot = arr[high];    // pivot
    int i = (low - 1);  // Index of smaller element
 
    for (int j = low; j <= high- 1; j++)
    {
        // If current element is smaller than or
        // equal to pivot
        if (arr[j] <= pivot)
        {
            i++;    // increment index of smaller element
            swap(arr[i], arr[j]);
        }
    }
    swap(arr[i + 1], arr[high]);
    return (i + 1);
}
 
/* The main function that implements QuickSort
 arr[] --> Array to be sorted,
  low  --> Starting index,
  high  --> Ending index */
void quickSort(int arr[], int low, int high)
{
    if (low < high)
    {
        /* pi is partitioning index, arr[p] is now
           at right place */
        int pi = partition(arr, low, high);
 
        // Separately sort elements before
        // partition and after partition
        quickSort(arr, low, pi - 1);
        quickSort(arr, pi + 1, high);
    }
}
static vector<string> menuoptions =  {
	"Return to main menu..",
	"Bubble Sort",
	"Selection Sort",
	"Insertion Sort",
	"Quick sort"
};


void sortArrayDriver() {
	int choice;
	do {
		printArrayDriver();
		cout << ("  Sorting Menu:\n");
		app->displayMenu(menuoptions);
		cout << "Enter your choice:";
		cin >> choice;
		switch(choice) {
			case 0:
				return;
			case 1:
				bubbleSort();
				break;
			case 2:
				selectionSort();
				break;
			case 3:
				insertionSort();
			case 4:
				quickSort(arr,0,n-1);
			default:
				continue;
		}
		
	} while (choice != 0);
}
