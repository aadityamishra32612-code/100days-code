#include <stdio.h>

int main(void) {
    int total_seconds, hours, minutes, seconds;

    printf("Enter time in seconds: ");
    if (scanf("%d", &total_seconds) != 1 || total_seconds < 0) {
        fprintf(stderr, "Invalid input. Please enter a non-negative number.\n");
        return 1;
    }

    
    hours = total_seconds / 3600;           
    minutes = (total_seconds % 3600) / 60;  
    seconds = total_seconds % 60;           

    printf("%d seconds = %02d:%02d:%02d\n", total_seconds, hours, minutes, seconds);

    return 0;
}
