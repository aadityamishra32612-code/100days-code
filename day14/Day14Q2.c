#include <stdio.h>

int main() {
    int n, i;
    long long product = 1; // Using long long to handle large products
    int hasEvenNumbers = 0;

    printf("Enter a positive number n: ");
    scanf("%d", &n);

    if (n <= 0) {
        printf("Please enter a positive number!\n");
        return 1;
    }

    printf("Even numbers from 1 to %d are: ", n);
    
    // Find and multiply even numbers
    for (i = 1; i <= n; i++) {
        if (i % 2 == 0) {
            printf("%d", i);
            product *= i;
            hasEvenNumbers = 1;
            if (i < n - 1) {
                printf("  ");  // Print multiplication symbol between numbers
            }
        }
    }

    if (hasEvenNumbers) {
        printf("\nProduct of even numbers = %lld\n", product);
    } else {
        printf("\nNo even numbers found in the range!\n");
    }

    return 0;
}
