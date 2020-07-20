// q4.c
#include <stdio.h>

typedef struct {
	int a;
	float b;
} s_t;

int main(void) {
	s_t s;
	s_t *p;
	p = &s;
	printf("Enter an integer: ");
	scanf("%d", &(*p).a);
	// scanf("%d", &(p->a));
	printf("a = %d\n", s.a);

	return 0;
}
