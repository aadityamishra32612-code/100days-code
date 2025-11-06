#include <stdio.h>

int main(void) {
	double a, b, c, largest;

	printf("Enter three numbers separated by space: ");
	if (scanf("%lf %lf %lf", &a, &b, &c) != 3) {
		fprintf(stderr, "Invalid input. Please enter three numbers.\n");
		return 1;
	}

	if (a >= b) {
		if (a >= c) {
			largest = a;
		} else {
			largest = c;
		}
	} else {
		if (b >= c) {
			largest = b;
		} else {
			largest = c;
		}
	}

	printf("The largest number is: %.2f\n", largest);
	return 0;
}

