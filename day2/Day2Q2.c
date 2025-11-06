#include <stdio.h>

int main(void) {
	double radius;
	const double PI = 3.14159265358979323846;

	printf("Enter the radius of the circle: ");
	if (scanf("%lf", &radius) != 1) {
		fprintf(stderr, "Invalid input. Please enter a number for radius.\n");
		return 1;
	}

	if (radius <= 0) {
		fprintf(stderr, "Radius must be a positive number.\n");
		return 1;
	}

	double area = PI * radius * radius;
	double circumference = 2.0 * PI * radius;

	printf("Area = %.2f\n", area);
	printf("Circumference = %.2f\n", circumference);

	return 0;
}

