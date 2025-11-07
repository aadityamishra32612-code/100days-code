#include <stdio.h>

int main() {
    int num, digit, maxDigit = 0, maxCount = 0;
    int count[10] = {0};

    printf("Enter an integer: ");
    scanf("%d", &num);

    if(num < 0) num = -num;

    while (num > 0) {
        digit = num % 10;
        count[digit]++;
        num /= 10;
    }

    for (int i = 0; i < 10; i++) {
        if (count[i] > maxCount) {
            maxCount = count[i];
            maxDigit = i;
        }
    }

    printf("Digit %d occurs the most, %d times.\n", maxDigit, maxCount);

    return 0;
}
