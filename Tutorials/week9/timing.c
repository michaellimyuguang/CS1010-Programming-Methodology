// timing.c
#include <stdio.h>
#include <time.h>

int main(void) {
	clock_t start, finish;
	long i; // long = long integer

	start = clock();
	for (i=0; i<100000000; i++)
		;   // empty loop body
	finish = clock();

	printf("Difference = %.2f sec.\n", (double)(finish - start)/CLOCKS_PER_SEC);

	return 0;
}

