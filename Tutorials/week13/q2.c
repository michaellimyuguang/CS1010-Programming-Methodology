// q2.c
#include <stdio.h>

typedef struct {
	int a;
	float b;
} s_t;

int main(void) {
	s_t s;

	printf("Enter an integer: ");
	scanf("%d", &s.a);
	printf("a = %d\n", s.a);

	return 0;
}
