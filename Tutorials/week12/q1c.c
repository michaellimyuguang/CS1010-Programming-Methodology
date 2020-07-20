// q1c.c 
#include <stdio.h>

int mystery(int, int);

int main(void) {
	int num1, num2;

	printf("Enter 2 integers: ");
	scanf("%d %d", &num1, &num2);

	printf("Answer = %d\n", mystery(num1, num2));

	return 0;
}

int mystery(int x, int y) {
	if (x == 0)
		return y;
	else if (x < 0)
		return mystery(++x, --y);
	else
		return mystery(--x, ++y);
}

