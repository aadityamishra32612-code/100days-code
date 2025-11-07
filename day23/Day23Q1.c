#include <stdio.h>

int main() {
    int n, i;
    float sum = 0.0, numerator = 2.0, denominator = 3.0;

    printf("Enter number of terms: ");
    scanf("%d", &n);

    for (i = 1; i <= n; i++) {
        sum += numerator / denominator;
        numerator += 2;
        denominator += 4;
    }

    printf("Sum of the series up to %d terms: %.4f\n", n, sum);
    return 0;
}
