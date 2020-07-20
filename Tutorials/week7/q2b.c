// q2b.c
#include <stdio.h>
#define LENGTH 10

void printArray(int [], int);
void process(int [], int);

int main(void) {
    int numbers[] = {5,1,3,9,7,8,2,0,6,4};

	process(numbers, LENGTH);
	printArray(numbers, LENGTH);

    return 0;
}

void process(int arr[], int size) {
	int i;

	for (i=0; i<size; i++) {
		arr[i] = arr[arr[i]];
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

