#include <stdio.h>
#include <stdlib.h>

long long find_hcf(long long a, long long b) {
    
    a = llabs(a);
    b = llabs(b);
    
    // Base cases
    if (a == 0) return b;
    if (b == 0) return a;
    
    while (b != 0) {
        long long temp = b;
        b = a % b;
        a = temp;
    }
    
    return a;
}

int main(void) {
    long long num1, num2;
    
    printf("Enter two integers to find their HCF (GCD):\n");
    printf("Enter first number: ");
    if (scanf("%lld", &num1) != 1) {
        fprintf(stderr, "Invalid input for first number. Please enter an integer.\n");
        return 1;
    }
    
    printf("Enter second number: ");
    if (scanf("%lld", &num2) != 1) {
        fprintf(stderr, "Invalid input for second number. Please enter an integer.\n");
        return 1;
    }
    
    
    if (num1 == 0 && num2 == 0) {
        printf("HCF(0,0) is undefined.\n");
        return 0;
    }
    
    long long hcf = find_hcf(num1, num2);
    
    printf("HCF(%lld, %lld) = %lld\n", num1, num2, hcf);
    

    if (hcf == 1) {
        printf("These numbers are coprime (their only common factor is 1).\n");
    }
    
    return 0;
}
