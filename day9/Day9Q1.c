#include <stdio.h>
#include <math.h>

int main(void) {
	double a, b, c;

	printf("Enter coefficients a, b and c (separated by space): ");
	if (scanf("%lf %lf %lf", &a, &b, &c) != 3) {
		fprintf(stderr, "Invalid input. Please enter three numeric coefficients.\n");
		return 1;
	}

	if (fabs(a) < 1e-12) {

		if (fabs(b) < 1e-12) {
			if (fabs(c) < 1e-12) {
				printf("Infinite solutions (0 = 0).\n");
			} else {
				printf("No solution (constant non-zero equation).\n");
			}
		} else {
			double root = -c / b;
			printf("Linear equation. Single root: %.6f\n", root);
		}
		return 0;
	}

	double discriminant = b*b - 4.0*a*c;

	printf("Discriminant (b^2 - 4ac) = %.6f\n", discriminant);

	if (discriminant > 0.0) {
		double sqrt_d = sqrt(discriminant);
		double r1 = (-b + sqrt_d) / (2.0 * a);
		double r2 = (-b - sqrt_d) / (2.0 * a);
		printf("Roots are real and distinct.\n");
		printf("Root 1 = %.6f\n", r1);
		printf("Root 2 = %.6f\n", r2);
	} else if (fabs(discriminant) <= 1e-12) {
		double r = -b / (2.0 * a);
		printf("Roots are real and equal.\n");
		printf("Root = %.6f\n", r);
	} else {
		double sqrt_d = sqrt(-discriminant);
		double real_part = -b / (2.0 * a);
		double imag_part = sqrt_d / (2.0 * a);
		printf("Roots are complex (conjugates).\n");
		printf("Root 1 = %.6f + %.6fi\n", real_part, imag_part);
		printf("Root 2 = %.6f - %.6fi\n", real_part, imag_part);
	}

	return 0;
}

