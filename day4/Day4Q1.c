#include <stdio.h>

int main(void) {
    int first, second;

    printf("Enter two numbers (separated by space): ");
    if (scanf("%d %d", &first, &second) != 2) {
        fprintf(stderr, "Invalid input. Please enter two numbers.\n");
        return 1;
    }

    printf("\nBefore swap:\n");
    printf("First number = %d\n", first);
    printf("Second number = %d\n", second);

    
    first = first + second;    
    second = first - second;   
    first = first - second;    

    printf("\nAfter swap:\n");
    printf("First number = %d\n", first);
    printf("Second number = %d\n", second);

    return 0;
}
