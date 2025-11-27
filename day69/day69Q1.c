#include <stdio.h>

int main() {
    int n;
    scanf("%d", &n);

    int arr[n];
    int xorAll = 0;

    for (int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);

        xorAll ^= arr[i];     
        xorAll ^= i;          
    }

   
    xorAll ^= n - 1;

    printf("%d\n", xorAll);

    return 0;
}
