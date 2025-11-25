#include <stdio.h>
#include <string.h>

int main() {
    char str[500];
    
    printf("Enter a sentence: ");
    fgets(str, sizeof(str), stdin);

    int start = 0, end = 0;

    for (int i = 0; ; i++) {
        if (str[i] == ' ' || str[i] == '\0' || str[i] == '\n') {
            end = i - 1;
            
            while (start < end) {
                char temp = str[start];
                str[start] = str[end];
                str[end] = temp;
                start++;
                end--;
            }
            start = i + 1;
        }
        if (str[i] == '\0') break;
    }

    printf("Sentence with reversed words: %s", str);

    return 0;
}
