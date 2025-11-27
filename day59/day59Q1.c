#include <stdio.h>
#include <stdlib.h>
#include <limits.h>

int main() {
    int n;
    if (scanf("%d", &n) != 1 || n <= 0) {
        printf("Invalid input\n");
        return 0;
    }

    long long *arr = malloc(sizeof(long long) * n);
    if (!arr) {
        printf("Memory allocation failed\n");
        return 0;
    }

    for (int i = 0; i < n; ++i) {
        if (scanf("%lld", &arr[i]) != 1) {
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

    
    long long window_sum = 0;
    for (int i = 0; i < k; ++i) window_sum += arr[i];

    long long max_sum = window_sum;

    
    for (int i = k; i < n; ++i) {
        window_sum += arr[i];
        window_sum -= arr[i - k];
        if (window_sum > max_sum) max_sum = window_sum;
    }

    printf("%lld\n", max_sum);

    free(arr);
    return 0;
}

