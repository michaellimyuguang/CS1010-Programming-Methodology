// selection_sort.c
#include <stdio.h>
#define MAX_ELEMENTS 20

void selectionSort(int [], int);
int scanArray(int []);
void printArray(int [], int);

int main(void) {
	int list[MAX_ELEMENTS], size;

	size = scanArray(list);

	printf("Before sort:\n");
	printArray(list, size); 

	selectionSort(list, size);

	printf("After sort:\n");
	printArray(list, size); 

	return 0;
}

// To sort arr in increasing order.
void selectionSort(int arr[], int size) {
	int i, start_index, min_index, temp;

	for (start_index = 0; start_index < size-1; start_index++) {
		// each iteration of the for loop is one pass

		// find the index of minimum element 
		min_index = start_index;
		for (i = start_index+1; i < size; i++) 
			if (arr[i] < arr[min_index]) 
				min_index = i;

		// swap minimum element with element at start_index
		temp = arr[start_index];
		arr[start_index] = arr[min_index];
		arr[min_index] = temp;
	}
}

// To read values into arr and return the number of elements read.
int scanArray(int arr[]) {
	int size, i;

	printf("Enter size: ");
	scanf("%d", &size);
	printf("Enter %d values:\n", size);
	for (i=0; i<size; i++) 
		scanf("%d", &arr[i]);

	return size;
}

// To print values of arr
void printArray(int arr[], int size) {
	int i;

	// To print all values on one line
	for (i=0; i<size; i++) 
		printf("%d ", arr[i]);

	printf("\n");
}

