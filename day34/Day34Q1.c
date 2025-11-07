#include <stdio.h>

int main() {
    int n, pos, i, key;
    scanf("%d", &n);

    int arr[n+1];
    for (i = 0; i < n; i++)
        scanf("%d", &arr[i]);

    scanf("%d %d", &key, &pos);

    for (i = n; i >= pos; i--)
        arr[i] = arr[i-1];

    arr[pos-1] = key;
    n++;

    for (i = 0; i < n; i++)
        printf("%d ", arr[i]);
    printf("\n");

    return 0;
}
