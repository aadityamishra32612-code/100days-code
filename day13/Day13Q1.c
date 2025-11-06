

#include <stdio.h>

int main(void) {
    double num1, num2, result;
    char operator;

    printf("Enter an expression (number operator number): ");
    if (scanf("%lf %c %lf", &num1, &operator, &num2) != 3) {
        fprintf(stderr, "Invalid input. Format: number operator number (e.g., 10 + 5)\n");
        return 1;
    }

    switch (operator) {
        case '+':
            result = num1 + num2;
            printf("%.2f + %.2f = %.2f\n", num1, num2, result);
            break;

        case '-':
            result = num1 - num2;
            printf("%.2f - %.2f = %.2f\n", num1, num2, result);
            break;

        case '*':
            result = num1 * num2;
            printf("%.2f * %.2f = %.2f\n", num1, num2, result);
            break;

        case '/':
            if (num2 == 0) {
                fprintf(stderr, "Error: Division by zero is not allowed.\n");
                return 1;
            }
            result = num1 / num2;
            printf("%.2f / %.2f = %.2f\n", num1, num2, result);
            break;

        case '%':
            if (num2 == 0) {
                fprintf(stderr, "Error: Modulo by zero is not allowed.\n");
                return 1;
            }
            
            result = (int)num1 % (int)num2;
            printf("%d %% %d = %d\n", (int)num1, (int)num2, (int)result);
            break;

        default:
            fprintf(stderr, "Invalid operator. Please use +, -, *, /, or %%\n");
            return 1;
    }

    return 0;
}
