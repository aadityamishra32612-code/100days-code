#include <stdio.h>
#include <stdlib.h>

int main(void) {
    long long n;

    printf("Enter an integer: ");
    if (scanf("%lld", &n) != 1) {
        fprintf(stderr, "Invalid input. Please enter an integer.\n");
        return 1;
    }

    if (n == 0) {
        printf("Binary: 0\n");
        return 0;
    }

    int is_negative = 0;
    unsigned long long value;
    if (n < 0) {
        is_negative = 1;
        
        value = (unsigned long long)(-n);
    } else {
        value = (unsigned long long)n;
    }

    
    char bits[64];
    int idx = 0;
    while (value > 0) {
        bits[idx++] = (value % 2) ? '1' : '0';
        value /= 2;
    }


    if (is_negative) {
        printf("Binary: -");
    } else {
        printf("Binary: ");
    }

    for (int i = idx - 1; i >= 0; --i) {
        putchar(bits[i]);
    }
    putchar('\n');

    return 0;
}
