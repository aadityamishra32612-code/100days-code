#include <stdio.h>
int main(void) {
    int day;

    printf("Enter a number (1-7): ");
    if (scanf("%d", &day) != 1) {
        fprintf(stderr, "Invalid input. Please enter an integer between 1 and 7.\n");
        return 1;
    }

    switch (day) {
        case 1:
            printf("1 -> Monday\n");
            break;
        case 2:
            printf("2 -> Tuesday\n");
            break;
        case 3:
            printf("3 -> Wednesday\n");
            break;
        case 4:
            printf("4 -> Thursday\n");
            break;
        case 5:
            printf("5 -> Friday\n");
            break;
        case 6:
            printf("6 -> Saturday\n");
            break;
        case 7:
            printf("7 -> Sunday\n");
            break;
        default:
            printf("%d is not in range 1-7. Please enter a value between 1 and 7.\n", day);
            break;
    }

    return 0;
}
