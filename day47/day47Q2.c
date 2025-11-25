#include <stdio.h>
#include <string.h>

int main() {
    char str[500];
    int maxLen = 0, len = 0, start = 0, maxStart = 0;
    
    printf("Enter a sentence: ");
    fgets(str, sizeof(str), stdin);

    for (int i = 0; ; i++) {
        if (str[i] != ' ' && str[i] != '\0' && str[i] != '\n') {
            len++;
        } else {
            if (len > maxLen) {
                maxLen = len;
                maxStart = start;  
            }
            len = 0;
            start = i + 1;
        }
        if (str[i] == '\0') break;
    }

    printf("Longest word: ");
    for (int i = 0; i < maxLen; i++) {
        putchar(str[maxStart + i]);
    }
    printf("\n");

    return 0;
}
