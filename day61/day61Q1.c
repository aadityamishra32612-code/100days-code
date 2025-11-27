#include <stdio.h>
#include <stdlib.h>

int main() {
    int n;
    if (scanf("%d", &n) != 1 || n <= 0) {
        printf("Invalid input\n");
        return 0;
    }

    int *arr = malloc(sizeof(int) * n);
    if (!arr) {
        printf("Memory allocation failed\n");
        return 0;
    }

    for (int i = 0; i < n; ++i) {
        if (scanf("%d", &arr[i]) != 1) {
            printf("Invalid input\n");
            free(arr);
            return 0;
        }
    }

    int k;
    if (scanf("%d", &k) != 1 || k <= 0) {
        printf("Invalid input\n");
        free(arr);
        return 0;
    }

    if (k > n) {
        printf("Invalid input: k is larger than array size\n");
        free(arr);
        return 0;
    }

    
    int *q = malloc(sizeof(int) * n);
    if (!q) {
        printf("Memory allocation failed\n");
        free(arr);
        return 0;
    }
    int head = 0, tail = 0; 

    for (int i = 0; i < n; ++i) {
    
        if (arr[i] < 0) {
            q[tail++] = i;
        }

        
        if (i >= k - 1) {
            int window_start = i - k + 1;

            
            while (head < tail && q[head] < window_start) {
                head++;
            }

            
            if (head < tail) {
                printf("%d ", arr[q[head]]);
            } else {
                printf("0 ");
            }
        }
    }

    printf("\n");

    free(arr);
    free(q);
    return 0;
}
