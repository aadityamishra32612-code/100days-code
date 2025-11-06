
#include <stdio.h>
#include <stdlib.h>
#include <limits.h>
#include <stdint.h>

static unsigned long long int_pow(unsigned int base, unsigned int exp) {
    unsigned long long result = 1ULL;
    for (unsigned int i = 0; i < exp; ++i) {
        if (base != 0 && result > ULLONG_MAX / base) {
            return ULLONG_MAX; // signal overflow
        }
        result *= (unsigned long long)base;
    }
    return result;
}

int main(void) {
    long long n;
    printf("Enter a non-negative integer: ");
    if (scanf("%lld", &n) != 1) {
        fprintf(stderr, "Invalid input. Please enter an integer.\n");
        return 1;
    }

    if (n < 0) {
        printf("%lld is not an Armstrong number (negative numbers are not considered).\n", n);
        return 0;
    }

    unsigned long long value = (unsigned long long)n;

    unsigned int digits = 0;
    if (value == 0ULL) digits = 1;
    else {
        unsigned long long tmp = value;
        while (tmp > 0ULL) {
            ++digits;
            tmp /= 10ULL;
    unsigned long long sum = 0ULL;
    unsigned long long tmp = value;
    while (tmp > 0ULL) {
        unsigned int digit = (unsigned int)(tmp % 10ULL);
        unsigned long long p = int_pow(digit, digits);
        if (p == ULLONG_MAX) {
            fprintf(stderr, "Error: overflow computing %u^%u.\n", digit, digits);
            return 1;
        }
        if (sum > ULLONG_MAX - p) {
            fprintf(stderr, "Error: overflow while summing powers.\n");
            return 1;
        }
        sum += p;
        tmp /= 10ULL;
    }

    if (sum == value) {
        printf("%llu is an Armstrong number.\n", value);
    } else {
        printf("%llu is not an Armstrong number.\n", value);
    }

    return 0;
}
