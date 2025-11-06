#include <stdio.h>

int main(void) {
    int year;

    printf("Enter a year: ");
    if (scanf("%d", &year) != 1 || year <= 0) {
        fprintf(stderr, "Invalid input. Please enter a positive year.\n");
        return 1;
    }

    if (year % 400 == 0) {
        printf("%d is a leap year.\n", year);
    } else if (year % 100 == 0) {
        printf("%d is not a leap year.\n", year);
    } else if (year % 4 == 0) {
        printf("%d is a leap year.\n", year);
    } else {
        printf("%d is not a leap year.\n", year);
    }
    
    printf("\nExplanation:\n");
    if (year % 400 == 0) {
        printf("- %d is divisible by 400\n", year);
    } else if (year % 100 == 0) {
        printf("- %d is divisible by 100 (but not by 400)\n", year);
    } else if (year % 4 == 0) {
        printf("- %d is divisible by 4 (but not by 100)\n", year);
    } else {
        printf("- %d is not divisible by 4\n", year);
    }

    return 0;
}
