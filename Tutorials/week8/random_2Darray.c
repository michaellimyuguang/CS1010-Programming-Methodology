// random_2Darray.c 
// This program initialise a 2D array with random non-negative 
// integers in the range [0, LIMIT - 1].
#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#define MAX_ROW 10
#define MAX_COL 10
#define LIMIT 100

void printArray(int [][MAX_COL], int, int);

int main(void) {
	int array[MAX_ROW][MAX_COL]; 
	int r, c;

	srand(time(NULL)); // refer to Unit #11 Random Numbers

	for (r=0; r<MAX_ROW; r++)
		for (c=0; c<MAX_COL; c++)
			array[r][c] = rand() % LIMIT;

	printArray(array, MAX_ROW, MAX_COL); // for checking

	return 0;
}

// To print values of array
void printArray(int arr[][MAX_COL], int rows, int cols) {
	int r, c;

	for (r=0; r<rows; r++) {
		for (c=0; c<cols; c++) 
			printf("%d\t", arr[r][c]);
		printf("\n");
	}
}

