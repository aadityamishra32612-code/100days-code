#include <stdio.h>

typedef enum {
    ADD = 1,
    SUBTRACT,
    MULTIPLY
} Operation;

int main() {
    int choice;
    float a, b;

    printf("Enter two numbers: ");
    scanf("%f %f", &a, &b);

    printf("Menu:\n");
    printf("1. ADD\n");
    printf("2. SUBTRACT\n");
    printf("3. MULTIPLY\n");
    printf("Enter choice: ");
    scanf("%d", &choice);

    switch ((Operation)choice) {
        case ADD:
            printf("Result = %.2f\n", a + b);
            break;
        case SUBTRACT:
            printf("Result = %.2f\n", a - b);
            break;
        case MULTIPLY:
            printf("Result = %.2f\n", a * b);
            break;
        default:
            printf("Invalid choice.\n");
    }

    return 0;
}
