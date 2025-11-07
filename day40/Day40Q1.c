#include <stdio.h>

int main() {
    int rows, cols;
    scanf("%d %d", &rows, &cols);

    int matrix[rows][cols];
    for (int i = 0; i < rows; i++)
        for (int j = 0; j < cols; j++)
            scanf("%d", &matrix[i][j]);

    for (int d = 0; d < rows + cols - 1; d++) {
        int start_row = d < cols ? 0 : d - cols + 1;
        int start_col = d < cols ? d : cols - 1;

        int i = start_row, j = start_col;
        while (i < rows && j >= 0) {
            printf("%d ", matrix[i][j]);
            i++;
            j--;
        }
        printf("\n");
    }

    return 0;
}
