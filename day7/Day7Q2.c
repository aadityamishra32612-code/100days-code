#include <stdio.h>
#include <ctype.h>

int main(void) {
    char ch;

    printf("Enter a letter: ");
    if (scanf(" %c", &ch) != 1) {
        fprintf(stderr, "Error reading input.\n");
        return 1;
    }

    ch = tolower(ch);

    if (!isalpha(ch)) {
        printf("'%c' is not a letter.\n", ch);
        return 1;
    }

    if (ch == 'a' || ch == 'e' || ch == 'i' || ch == 'o' || ch == 'u') {
        printf("'%c' is a vowel.\n", ch);
    } else {
        printf("'%c' is a consonant.\n", ch);
    }

    return 0;
}
