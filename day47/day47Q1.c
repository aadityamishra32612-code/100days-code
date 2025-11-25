#include <stdio.h>

int main() {
    char str1[200], str2[200];
    int freq1[256] = {0}, freq2[256] = {0}; 
    int i = 0;

    printf("Enter first string: ");
    fgets(str1, sizeof(str1), stdin);

    printf("Enter second string: ");
    fgets(str2, sizeof(str2), stdin);

    while (str1[i] != '\0') {
        if (str1[i] != '\n' && str1[i] != ' ') 
            freq1[(int)str1[i]]++;
        i++;
    }

    i = 0;
    
    while (str2[i] != '\0') {
        if (str2[i] != '\n' && str2[i] != ' ')
            freq2[(int)str2[i]]++;
        i++;
    }

    
    for (i = 0; i < 256; i++) {
        if (freq1[i] != freq2[i]) {
            printf("Strings are NOT anagrams.\n");
            return 0;
        }
    }

    printf("Strings are anagrams.\n");
    return 0;
}
