#include <stdio.h>
#include <math.h>

int main(void) {
	double a, b, c;
	const double EPS = 1e-6;

	printf("Enter three side lengths (separated by space): ");
	if (scanf("%lf %lf %lf", &a, &b, &c) != 3) {
		fprintf(stderr, "Invalid input. Please enter three numbers.\n");
		return 1;
	}

	if (a <= 0.0 || b <= 0.0 || c <= 0.0) {
		fprintf(stderr, "Side lengths must be positive numbers.\n");
		return 1;
	}

	if ((a + b) <= c + EPS || (a + c) <= b + EPS || (b + c) <= a + EPS) {
		printf("Not a valid triangle (triangle inequality violated).\n");
		return 0;
	}

	auto double_eq = 0;

	int ab_eq = fabs(a - b) <= EPS;
	int bc_eq = fabs(b - c) <= EPS;
	int ca_eq = fabs(c - a) <= EPS;

	if (ab_eq && bc_eq && ca_eq) {
		printf("Triangle is Equilateral.\n");
	} else if (ab_eq || bc_eq || ca_eq) {
		printf("Triangle is Isosceles.\n");
	} else {
		printf("Triangle is Scalene.\n");
	}

	return 0;
}

