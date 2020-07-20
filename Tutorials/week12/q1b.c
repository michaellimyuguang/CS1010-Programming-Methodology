// q1b.c 
#include <stdio.h>

int q(int);
int q_iter(int);

int main(void) {
	int num;

	printf("Enter a non-negative integer: ");
	scanf("%d", &num);

	printf("Answer (iterative) = %d\n", q_iter(num));
	printf("Answer (recursive) = %d\n", q(num));

	return 0;
}

// Precond: n >= 0
int q(int n) {
	if (n < 3)
		return n+1;
	else
		return q(n-3) + q(n-1);
}

// Precond: n >= 0
int q_iter(int n) {
	int prev3 = 1, prev2 = 2, prev1 = 3, ans, i;

	if (n < 3)
		return n+1;
	else {
		for (i=3; i<=n; i++) {
			ans = prev3 + prev1;
			prev3 = prev2;
			prev2 = prev1;
			prev1 = ans;
		}
	}
	return ans;
}

