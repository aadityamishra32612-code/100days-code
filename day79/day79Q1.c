#include <stdio.h>

int main() {
    FILE *fp;
    int num, sum = 0, count = 0;
    char filename[] = "numbers.txt";

    fp = fopen(filename, "r");
    if (!fp) {
        printf("Error: Cannot open numbers.txt\n");
        return 1;
    }


    while (fscanf(fp, "%d", &num) == 1) {
        sum += num;
        count++;
    }

    fclose(fp);

    if (count == 0) {
        printf("No numbers found.\n");
        return 0;
    }

    printf("Sum = %d\n", sum);
    printf("Average = %.2f\n", (float)sum / count);

    return 0;
}
