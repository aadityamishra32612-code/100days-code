#include <stdio.h>

int main() {
    int n, flag = 1;
    scanf("%d", &n);

    int matrix[n][n];
    for (int i = 0; i < n; i++)
        for (int j = 0; j < n; j++)
            scanf("%d", &matrix[i][j]);

    for (int i = 0; i < n; i++)
        for (int j = i + 1; j < n; j++)
            if (matrix[i][i] == matrix[j][j])
                flag = 0;

    if (flag)
        printf("Diagonal elements are distinct\n");
    else
        printf("Diagonal elements are not distinct\n");

    return 0;
}
