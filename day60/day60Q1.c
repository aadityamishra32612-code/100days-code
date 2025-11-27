#include <stdio.h>

int main() {
    int n;
    scanf("%d", &n);

    int arr[n];
    for (int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    int k;
    scanf("%d", &k);

    if (k > n || k <= 0) {
        printf("Invalid window size\n");
        return 0;
    }

    
    for (int i = 0; i <= n - k; i++) {
        int maxVal = arr[i];

        
        for (int j = i; j < i + k; j++) {
            if (arr[j] > maxVal) {
                maxVal = arr[j];
            }
        }

        printf("%d ", maxVal);
    }

    return 0;
}
