// cap_skeleton.c 
// Read a student's results and compute his CAP.
// This is a skeleton program for students.

#include <stdio.h>
#include <string.h>
#define MAX_MODULES 50

// Define result_t and student_t below


void printResults(student_t, int);
float computeCAP(student_t, int);

int main(void) {
	student_t student;
	int num_modules;

	printf("Enter student's name: ");
	printf("Enter number of modules taken: ");

	printf("Enter results of %d modules:\n", num_modules);

	// printResults(student, num_modules); // for checking

	printf("CAP = %.2f\n", computeCAP(student, num_modules));

	return 0;
}

// Print results of the student
void printResults(student_t student, int num_modules) {
	int i;

	printf("Student's name: %s\n", student.name);
	for (i=0; i<num_modules; i++)
		printf("  %-7s %-2s %d\n", student.results[i].module_code,
				student.results[i].grade, student.results[i].mc);
}

// Compute CAP of student.
// This is a stub.
float computeCAP(student_t student, int num_modules) {

	return 5.0;
}

