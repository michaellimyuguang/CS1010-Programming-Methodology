// bubble_sort.c
#include <stdio.h>
#include <time.h>
#define MAX_ELEMENTS 16000

void bubbleSort(int [], int);
int scanArray(int []);
void printArray(int [], int);

int main(void) {
	int list[MAX_ELEMENTS], size;
	clock_t start, finish; 

	size = scanArray(list);

	/*
	printf("Before sort: ");
	printArray(list, size);
	*/

	start = clock();
	bubbleSort(list, size);
	finish = clock();

	/*
	printf("After sort: ");
	printArray(list, size);
	*/

	printf("Time = %.2f\n", (double)(finish - start)/CLOCKS_PER_SEC);

	return 0;
}

// To sort arr in increasing order.
void bubbleSort(int arr[], int size) {
	int i, limit, temp;

	for (limit = size-2; limit >= 0; limit--) {
		// limit is where the inner loop variable i should end 

		for (i=0; i<=limit; i++) {
			if (arr[i] > arr[i+1]) {  // swap arr[i] with arr[i+1]
				temp = arr[i];
				arr[i] = arr[i+1];
				arr[i+1] = temp;
			}
		}
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

// To print values of arr.
void printArray(int arr[], int size) {
	int i;

	for (i=0; i<size; i++) 
		printf("%d ", arr[i]);

	printf("\n");
}

