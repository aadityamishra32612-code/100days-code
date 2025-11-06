
#include <stdio.h>
#include <math.h>
#include <stdbool.h>

bool is_prime(long long n) {
    // Handle edge cases
    if (n <= 1) return false;
    if (n <= 3) return true; 
    if (n % 2 == 0 || n % 3 == 0) return false;


    long long sqrt_n = (long long)sqrt((double)n);
    for (long long i = 5; i <= sqrt_n; i += 6) {
        if (n % i == 0 || n % (i + 2) == 0) {
            return false;
        }
    }
    return true;
}

int main(void) {
    long long n;
    
    printf("Enter an integer to check if it's prime: ");
    if (scanf("%lld", &n) != 1) {
        fprintf(stderr, "Invalid input. Please enter an integer.\n");
        return 1;
    }

    if (n < 0) {
        printf("%lld is not prime (negative numbers are not prime).\n", n);
        return 0;
    }

    if (is_prime(n)) {
        printf("%lld is a prime number.\n", n);
    } else {
        printf("%lld is not a prime number.\n", n);
        

        if (n > 1) {
            printf("Smallest factor other than 1: ");
            for (long long i = 2; i <= n; i++) {
                if (n % i == 0) {
                    printf("%lld\n", i);
                    break;
                }
            }
        }
    }

    return 0;
}
