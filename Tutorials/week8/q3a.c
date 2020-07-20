// q3a.c 
#include <stdio.h>

int main(void) {
	int sum[4][4], k, m, n;

	for (k=0; k<4; k++) sum[k][0] = 1;
	for (k=0; k<4; k++) sum[0][k] = 1;

	for (m=1; m<4; m++)
		for (n=1; n<4; n++)
			sum[m][n] = sum[m-1][n] + sum[m][n-1];

	for (n=1; n<4; n++)
		printf("%d ", sum[3][n]);
	printf("\n");

	return 0;
}

