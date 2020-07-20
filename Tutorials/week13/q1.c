// q1.c 
#include <stdio.h>

typedef struct {
	int p;
	float q;
} one_t;

typedef struct {
	int p;
	float q;
} two_t;

int main(void) {
	one_t one = { 1, 2.3 };
	two_t two;

	two = one;
	printf("%d %f\n", one.p, one.q);
	printf("%d %f\n", two.p, two.q);

	return 0;
}

