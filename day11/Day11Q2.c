#include <stdio.h>

int main(void) {
	double cp, sp;

	printf("Enter Cost Price and Selling Price separated by space: ");
	if (scanf("%lf %lf", &cp, &sp) != 2) {
		fprintf(stderr, "Invalid input. Please enter two numbers.\n");
		return 1;
	}

	if (cp <= 0.0) {
		fprintf(stderr, "Cost price must be greater than 0.\n");
		return 1;
	}

	double diff = sp - cp;
	if (diff > 0.0) {
		double profit = diff;
		double profit_percent = (profit / cp) * 100.0;
		printf("Profit = %.2f\n", profit);
		printf("Profit Percentage = %.2f%%\n", profit_percent);
	} else if (diff < 0.0) {
		double loss = -diff;
		double loss_percent = (loss / cp) * 100.0;
		printf("Loss = %.2f\n", loss);
		printf("Loss Percentage = %.2f%%\n", loss_percent);
	} else {
		printf("No profit no loss.\n");
	}

	return 0;
}

