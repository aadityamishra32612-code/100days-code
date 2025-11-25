#include <stdio.h>
#include <string.h>

int main() {
    char s1[200], s2[200];

    printf("Enter first string: ");
    fgets(s1, sizeof(s1), stdin);

    printf("Enter second string: ");
    fgets(s2, sizeof(s2), stdin);

    
    s1[strcspn(s1, "\n")] = '\0';
    s2[strcspn(s2, "\n")] = '\0';

    int len1 = 0, len2 = 0;

    
    while (s1[len1] != '\0') len1++;
    while (s2[len2] != '\0') len2++;

    if (len1 != len2) {
        printf("Not a rotation\n");
        return 0;
    }

    
    char concat[400];
    for (int i = 0; i < len1; i++)
        concat[i] = s1[i];
    for (int i = 0; i < len1; i++)
        concat[len1 + i] = s1[i];
    concat[2 * len1] = '\0';

    
    int found = 0;
    for (int i = 0; i <= 2*len1 - len2; i++) {
        int j;
        for (j = 0; j < len2; j++) {
            if (concat[i + j] != s2[j])
                break;
        }
        if (j == len2) {
            found = 1;
            break;
        }
    }

    if (found)
        printf("Second string is a rotation of the first\n");
    else
        printf("Not a rotation\n");

    return 0;
}
