#include <stdio.h>

int main(void) {
	double percent;

	printf("Enter percentage (0-100): ");
	if (scanf("%lf", &percent) != 1) {
		fprintf(stderr, "Invalid input. Please enter a numeric percentage.\n");
		return 1;
	}

	if (percent < 0.0 || percent > 100.0) {
		fprintf(stderr, "Percentage must be between 0 and 100.\n");
		return 1;
	}

	char grade;

	if (percent >= 90.0) {
		grade = 'A';
	} else if (percent >= 80.0) {
		grade = 'B';
	} else if (percent >= 70.0) {
		grade = 'C';
	} else if (percent >= 60.0) {
		grade = 'D';
	} else {
		grade = 'F';
	}

	printf("Percentage: %.2f%% -> Grade %c\n", percent, grade);
	return 0;
}

