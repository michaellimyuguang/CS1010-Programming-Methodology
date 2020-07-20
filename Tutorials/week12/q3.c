// q3.c
#include <stdio.h>
#define SIZE 8

void scan_array(int [], int);
int mystery(int [], int);

int main(void) {
	int list[SIZE];
	scan_array(list, SIZE);
	printf("Answer = %d\n", mystery(list, SIZE));
	return 0;
}

// Read in values for array arr
void scan_array(int arr[], int size) {
	int i;

	printf("Enter %d values: ", size);
	for (i=0; i<size; i++)
		scanf("%d", &arr[i]);
}

// Precond: n > 0
int mystery(int arr[], int n) {
	int m;

	if (n == 1)
		return arr[0];
	else {
		m = mystery(arr, n-1);
		return (arr[n-1] > m) ? arr[n-1] : m;
	}
}

