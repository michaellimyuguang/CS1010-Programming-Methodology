// q1b.c
#include <stdio.h>

float sumArray(float, int);

int main(void) {
	float prices[6], total;
	prices = { 10.2, 5.3, 4.4, 6.8, 7.7, 9.5 };

	sumArray(prices[6], 6);
	printf("Total = %f\n", total);

	return 0;
}

// Compute the sum of elements in array arr
// size: number of elements in arr
// Precond: size > 0
float sumArray(float arr, int size) {
	int i;
	float sum = 0.0;

	for (i=0; i<size; i++)
		sum += prices[i];

	return sum;
}
