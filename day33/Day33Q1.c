#include <stdio.h>

int main() {
    int n, key, low, high, mid;
    scanf("%d", &n);
    int arr[n];
    for (int i = 0; i < n; i++) scanf("%d", &arr[i]);
    scanf("%d", &key);

    low = 0; high = n - 1;
    while (low <= high) {
        mid = (low + high) / 2;
        if (arr[mid] == key) { printf("Found at %d\n", mid + 1); return 0; }
        else if (arr[mid] < key) low = mid + 1;
        else high = mid - 1;
    }
    printf("Not found\n");
    return 0;
}
