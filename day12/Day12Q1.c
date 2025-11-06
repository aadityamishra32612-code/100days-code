
#include <stdio.h>

int main(void) {
    int days;
    double fine = 0.0;

    printf("Enter number of days late: ");
    if (scanf("%d", &days) != 1 || days < 0) {
        fprintf(stderr, "Invalid input. Please enter a non-negative number of days.\n");
        return 1;
    }

    if (days > 30) {
        printf("Membership Cancelled.\n");
        printf("Book is more than 30 days overdue.\n");
    } else if (days > 0) {
        
        if (days <= 5) {
            fine = days * 2;
        } else {
            fine = 5 * 2;

            
            if (days <= 10) {
                fine += (days - 5) * 4;
            } else {
                fine += 5 * 4;  

                
             fine += (days - 10) * 6; 
            }
        }

        printf("Days Late: %d\n", days);
        printf("Fine Amount: ₹%.2f\n", fine);
    } else {
        printf("Book returned on time. No fine.\n");
    }

    return 0;
}
