#include <stdio.h>

int main() {
    char str[100];
    char *p;

    printf("Enter a string: ");
    fgets(str, sizeof(str), stdin);

    
    p = str;
    while (*p != '\0')
        p++;

    p--;               
    if (*p == '\n')    
        p--;

    printf("Reversed string: ");
    while (p >= str) {
        putchar(*p);
        p--;
    }

    printf("\n");
    return 0;
}
