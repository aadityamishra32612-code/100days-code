#include <stdio.h>

int main() {
    int n;
    unsigned long long factorial = 1; 
    
    printf("Enter a non-negative integer to calculate its factorial: ");
    if (scanf("%d", &n) != 1) {
        printf("Invalid input! Please enter a number.\n");
        return 1;
    }

    if (n < 0) {
        printf("Factorial is not defined for negative numbers!\n");
        return 1;
    }

    if (n > 20) {
    }
    
    
    if (n < 0) {
        printf("Factorial is not defined for negative numbers!\n");
        return 1;
    }
    
    
    if (n > 20) {
        printf("Warning: Result might be too large to calculate accurately!\n");
        printf("Maximum supported factorial is 20!\n");
        return 1;
    }
    
    printf("%d! = ", n);
    
    if (n == 0) {
        printf("1\n");
        return 0;
    }
    
    
    for (int i = 1; i <= n; i++) {
        factorial *= i;
        printf("%d", i);
        if (i < n) {
            printf(" × ");
        }
    }
    
    printf(" = %llu\n", factorial);
    
    return 0;
}
