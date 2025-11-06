#include <stdio.h>
#include <limits.h>
#include <stdint.h>

int main(void) {
    long long n;
    unsigned long long rev = 0ULL;

    printf("Enter an integer: ");
    if (scanf("%lld", &n) != 1) {
        fprintf(stderr, "Invalid input. Please enter an integer.\n");
        return 1;
    }

    if (n < 0) {
        
        printf("%lld is not a palindrome (negative numbers are not considered palindromes).\n", n);
        return 0;
    }

    long long original = n;


    while (n > 0) {
        int digit = (int)(n % 10);
    
        if (rev > (ULLONG_MAX - (unsigned long long)digit) / 10ULL) {
            fprintf(stderr, "Error: value too large to safely reverse.\n");
            return 1;
        }
        rev = rev * 10ULL + (unsigned long long)digit;
        n /= 10;
    }

    if (rev == (unsigned long long)original) {
        printf("%lld is a palindrome.\n", original);
    } else {
        printf("%lld is not a palindrome.\n", original);
    }

    return 0;
}
