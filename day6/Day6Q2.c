#include <stdio.h>

int main(void) {
    int number;

    printf("Enter an integer: ");
    if (scanf("%d", &number) != 1) {
        fprintf(stderr, "Invalid input. Please enter an integer.\n");
        return 1;
    }


    if (number > 0) {
        printf("%d is positive.\n", number);
    } else {
        if (number < 0) {
            printf("%d is negative.\n", number);
        } else {
            printf("%d is zero.\n", number);
        }
    }

    return 0;
}
