#include <stdio.h>

int main() {
    int n, flag = 1;
    scanf("%d", &n);

    int matrix[n][n];
    for (int i = 0; i < n; i++)
        for (int j = 0; j < n; j++)
            scanf("%d", &matrix[i][j]);

    for (int i = 0; i < n; i++)
        for (int j = 0; j < n; j++)
            if (matrix[i][j] != matrix[j][i])
                flag = 0;

    if (flag)
        printf("Matrix is symmetric\n");
    else
        printf("Matrix is not symmetric\n");

    return 0;
}
