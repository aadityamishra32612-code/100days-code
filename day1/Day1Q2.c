#include <stdio.h>

int main() {
    double a, b;
    printf("Enter two numbers: ");
    scanf("%lf %lf", &a, &b);

    if (b == 0) {
        printf("Division by zero not allowed.\n");
        return 0;
    }

    printf("Sum: %.2lf\nDifference: %.2lf\nProduct: %.2lf\nQuotient: %.2lf\n",
           a + b, a - b, a * b, a / b);
    return 0;
}
