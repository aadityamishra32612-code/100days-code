#include <stdio.h>
#include <math.h>

int main(void) {
    double principal, rate, time;
    double simple_interest, compound_interest;

    printf("Enter Principal amount: ");
    if (scanf("%lf", &principal) != 1 || principal <= 0) {
        fprintf(stderr, "Invalid principal amount. Please enter a positive number.\n");
        return 1;
    }

    printf("Enter Rate of interest (per annum): ");
    if (scanf("%lf", &rate) != 1 || rate < 0) {
        fprintf(stderr, "Invalid rate. Please enter a non-negative number.\n");
        return 1;
    }

    printf("Enter Time (in years): ");
    if (scanf("%lf", &time) != 1 || time <= 0) {
        fprintf(stderr, "Invalid time period. Please enter a positive number.\n");
        return 1;
    }

    
    simple_interest = (principal * rate * time) / 100.0;

    
    compound_interest = principal * pow(1 + rate/100.0, time) - principal;

    printf("\nPrincipal Amount: %.2f\n", principal);
    printf("Rate of Interest: %.2f%%\n", rate);
    printf("Time Period: %.2f years\n\n", time);
    
    printf("Simple Interest: %.2f\n", simple_interest);
    printf("Amount after Simple Interest: %.2f\n\n", principal + simple_interest);
    
    printf("Compound Interest: %.2f\n", compound_interest);
    printf("Amount after Compound Interest: %.2f\n", principal + compound_interest);

    return 0;
}
