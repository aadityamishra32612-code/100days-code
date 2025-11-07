#include <stdio.h>

int main() {
    int rows, cols;
    scanf("%d %d", &rows, &cols);

    int matrix[rows][cols];
    for (int i = 0; i < rows; i++)
        for (int j = 0; j < cols; j++)
            scanf("%d", &matrix[i][j]);

    int rowSum[rows];
    for (int i = 0; i < rows; i++) {
        rowSum[i] = 0;
        for (int j = 0; j < cols; j++)
            rowSum[i] += matrix[i][j];
    }

    for (int i = 0; i < rows; i++)
        printf("Sum of row %d: %d\n", i + 1, rowSum[i]);

    return 0;
}
