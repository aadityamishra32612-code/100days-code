#include <stdio.h>

int main() {
    int num, original;
    long long reversed = 0; 
    int isNegative = 0;     
    
    printf("Enter a number to reverse: ");
    if (scanf("%d", &num) != 1) {
        printf("Invalid input! Please enter a valid number.\n");
        return 1;
    }
    
    original = num;
    if (num < 0) {
        isNegative = 1;
        num = -num;
    }
    
    
    while (num > 0) {
        
        int digit = num % 10;
        
        
        if (reversed > (9223372036854775807 - digit) / 10) {
            printf("Error: Number too large to reverse!\n");
            return 1;
        }
        
        
        reversed = reversed * 10 + digit;
        
        
        num = num / 10;
    }
    
    
    if (isNegative) {
        reversed = -reversed;
    }
    
    
    printf("Original number: %d\n", original);
    printf("Reversed number: %lld\n", reversed);
    
    return 0;
}
