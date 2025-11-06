#include <stdio.h>

int main(void) {
	double length, breadth;

	printf("Enter length and breadth separated by space: ");
	if (scanf("%lf %lf", &length, &breadth) != 2) {
		fprintf(stderr, "Invalid input. Please enter two numbers.\n");
		return 1;
	}

	if (length <= 0 || breadth <= 0) {
		fprintf(stderr, "Length and breadth must be positive numbers.\n");
		return 1;
	}

	double area = length * breadth;
	double perimeter = 2.0 * (length + breadth);

	printf("Area = %.2f\n", area);
	printf("Perimeter = %.2f\n", perimeter);

	return 0;
}

