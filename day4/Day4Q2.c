#include <stdio.h>

int main(void) {
    int n, sum = 0;

    printf("Enter a positive integer n: ");
    if (scanf("%d", &n) != 1) {
        fprintf(stderr, "Invalid input. Please enter a number.\n");
        return 1;
    }

    if (n <= 0) {
        fprintf(stderr, "Please enter a positive number.\n");
        return 1;
    }


    for (int i = 1; i <= n; i++) {
        sum += i;
    }



    printf("Sum of first %d natural numbers = %d\n", n, sum);

    return 0;
}
