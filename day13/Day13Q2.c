

#include <stdio.h>

int main(void) {
    int n;

    printf("Enter a positive number n: ");
    if (scanf("%d", &n) != 1) {
        fprintf(stderr, "Invalid input. Please enter a number.\n");
        return 1;
    }

    if (n <= 0) {
        fprintf(stderr, "Please enter a positive number.\n");
        return 1;
    }

    printf("Numbers from 1 to %d:\n", n);
    for (int i = 1; i <= n; i++) {
        printf("%d", i);
        if (i < n) {
            printf(", ");  
        }
    }
    printf("\n");

    return 0;
}
