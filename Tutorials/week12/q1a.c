// q1a.c 
#include <stdio.h>

int f(int);

int main(void) {
	int num;

	printf("Enter a non-negative integer: ");
	scanf("%d", &num);

	printf("Answer = %d\n", f(num));

	return 0;
}

// Precond: n >= 0
int f(int n) {
	if (n == 0)
		return 0;
	else
		return (2 * n + f(n-1));
}

