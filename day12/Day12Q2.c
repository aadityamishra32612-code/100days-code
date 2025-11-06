#include <stdio.h>

int main(void) {
    double units, bill = 0.0;

    printf("Enter units consumed: ");
    if (scanf("%lf", &units) != 1 || units < 0) {
        fprintf(stderr, "Invalid input. Please enter a non-negative number of units.\n");
        return 1;
    }

    printf("\nElectricity Bill Calculation:\n");
    printf("---------------------------\n");

    if (units > 0) {
        
        if (units <= 100) {
            bill = units * 5;
            printf("First %.2f units @ ₹5 = ₹%.2f\n", units, bill);
        } else {
            bill = 100 * 5;
            printf("First 100 units @ ₹5 = ₹%.2f\n", 100 * 5.0);

            
            if (units <= 200) {
                double slab2_units = units - 100;
                bill += slab2_units * 7;
                printf("Next %.2f units @ ₹7 = ₹%.2f\n", slab2_units, slab2_units * 7.0);
            } else {
                bill += 100 * 7;
                printf("Next 100 units @ ₹7 = ₹%.2f\n", 100 * 7.0);

                
                if (units <= 300) {
                    double slab3_units = units - 200;
                    bill += slab3_units * 10;
                    printf("Next %.2f units @ ₹10 = ₹%.2f\n", slab3_units, slab3_units * 10.0);
                } else {
                    bill += 100 * 10;
                    printf("Next 100 units @ ₹10 = ₹%.2f\n", 100 * 10.0);

                    
                    double slab4_units = units - 300;
                    bill += slab4_units * 12;
                    printf("Remaining %.2f units @ ₹12 = ₹%.2f\n", slab4_units, slab4_units * 12.0);
                }
            }
        }

        printf("---------------------------\n");
        printf("Total Units: %.2f\n", units);
        printf("Total Bill: ₹%.2f\n", bill);
    } else {
        printf("No units consumed. Bill amount is ₹0.00\n");
    }

    return 0;
}
