// q3.c
#include <stdio.h>

int main(void) {
	double arr[] = { 1.1, 2.2, 3.3, 4.4 };
	int i;

	for (i=0; i<=4; i++) {
		printf("%d\n", i);
		arr[i] = 0;
	}

	return 0;
}

