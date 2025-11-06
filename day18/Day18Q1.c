
#include <stdio.h>
#include <stdlib.h>
#include <math.h>

void print_factors(long long n) {
    long long abs_n = llabs(n); 
    int factors_found = 0;
    
    printf("Factors of %lld are:\n", n);

    if (n == 0) {
        printf("All non-zero integers are factors of 0\n");
        return;
    }
    
    for (long long i = 1; i <= (long long)sqrt((double)abs_n); i++) {
        if (abs_n % i == 0) {
            
            if (factors_found > 0) {
                printf(", ");
            }
            printf("%lld", i * (n < 0 ? -1 : 1));
            factors_found++;
            
            
            long long pair = abs_n / i;
            if (pair != i) {
                printf(", %lld", pair * (n < 0 ? -1 : 1));
                factors_found++;
            }
        }
    }
    
    printf("\nTotal number of factors: %d\n", factors_found);
}

int main(void) {
    long long n;
    
    printf("Enter an integer to find its factors: ");
    if (scanf("%lld", &n) != 1) {
        fprintf(stderr, "Invalid input. Please enter an integer.\n");
        return 1;
    }
    
    print_factors(n);
    return 0;
}
