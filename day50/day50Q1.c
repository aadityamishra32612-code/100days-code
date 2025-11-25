#include <stdio.h>
#include <string.h>

int main() {
    char date[20];
    char day[3], month[3], year[5];
    char monthName[12][4] = {"Jan","Feb","Mar","Apr","May","Jun","Jul","Aug","Sep","Oct","Nov","Dec"};

    printf("Enter date in dd/mm/yyyy format: ");
    scanf("%s", date);

    
    sscanf(date, "%2s/%2s/%4s", day, month, year);


    int monthIndex = atoi(month); 

    if (monthIndex >= 1 && monthIndex <= 12) {
        printf("Formatted date: %s-%s-%s\n", day, monthName[monthIndex - 1], year);
    } else {
        printf("Invalid month!\n");
    }

    return 0;
}
