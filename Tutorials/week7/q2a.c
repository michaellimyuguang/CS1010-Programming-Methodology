// q2a.c
#include <stdio.h>
#define LENGTH 10

void printArray(int [], int);
void arrange(int [], int);

int main(void) {
	int numbers[] = {1,2,3,4,5,6,7,8,9,10};

	arrange(numbers, LENGTH);
	printArray(numbers, LENGTH);

	return 0;
}

void arrange(int arr[], int size) {
	int i;

	for (i=2; i<size; i++) {
		arr[i-2] += arr[i];
		arr[i-1] += arr[i];
	}
}

// Print array arr with size elements
// Precond: size > 0
void printArray(int arr[], int size) {
	int i;

	for (i=0; i<size; i++)
		printf("%d ", arr[i]);
	printf("\n");
}

