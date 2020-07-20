/**
 * box.c 
 * This program calculates the surface area of a box, and the
 * length of the diagonal connecting two vertices farthest apart.
 */

#include <stdio.h>
#include <math.h>

int compute_surface_area(int, int, int);
double compute_diagonal(int, int, int);

int main(void) {
	int length, width, height, area;
	double diagonal;

	printf("Enter length: ");
	scanf("%d", &length);

	printf("Enter height: ");
	scanf("%d", &height);

	area = compute_surface_area(length, width, height);
	printf("Surface area = %d\n", area);

	diagonal = compute_diagonal(length, width, height);
	printf("Diagonal = %.2f\n", diagonal);

	return 0;
}

// Compute the surface area of a box
// Precond: length>0, width>0, height>0
int compute_surface_area(int length, int width, int height) {
	return (2 * ((length * width) + (width * height) + (length * height)));
}

// Compute the length of diagonal of a box between two vertices
// that are farthest apart.
// Precond: length>0, width>0, height>0
double compute_diagonal(int length, int width, int height) {
	return sqrt((length * length) + (width * width) + (height * height));
}

