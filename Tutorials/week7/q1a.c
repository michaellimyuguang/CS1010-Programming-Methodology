// q1a.c
#include <stdio.h>

int main(void) {
	float[5] values;
	int i;

	for (i=1; i<=5; i++)
		values[i] = 2.5*i;

	for (i=1; i<=5; i++)
		printf("%f ", values[i]);
	printf("\n");

	return 0;
}
