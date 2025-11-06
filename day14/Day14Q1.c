#include <stdio.h>

int main(void) {
    int n, sum = 0;

    printf("Enter the value of n: ");
    if (scanf("%d", &n) != 1) {
        fprintf(stderr, "Invalid input. Please enter a number.\n");
        return 1;
    }

    if (n <= 0) {
        fprintf(stderr, "Please enter a positive number.\n");
        return 1;
    }

    printf("First %d odd numbers and their sum:\n", n);
    
    for (int i = 1; i <= n; i++) {
        int odd = 2 * i - 1;  
        sum += odd;
        
        
        printf("%d", odd);
        if (i < n) {
            printf(" + ");
        }
    }
    
    printf(" = %d\n", sum);

    printf("\nNote: Sum of first %d odd numbers can also be calculated as %d² = %d\n", 
           n, n, n * n);

    return 0;
}
