// q3b.c 
#include <stdio.h>

int main(void) {
	int array[][3] = { {1,1,1}, {2,2,2}, {3,3,3} };
	int i, j;

	for (i=0; i<3; i++)
		for (j=0; j<3; j++)
			array[i][j] += array[j][i];

	for (i=0; i<3; i++) {
		for (j=0; j<3; j++)
			printf("%d ", array[i][j]);
		printf("\n");
	}

	return 0;
}

