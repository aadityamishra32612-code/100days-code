#include <stdio.h>

int main() {
    char str[100];
    char *left, *right;
    int isPalindrome = 1;

    printf("Enter a string: ");
    fgets(str, sizeof(str), stdin);

    left = str;
    right = str;

    while (*right != '\0')
        right++;

    right--;               
    if (*right == '\n')    
        right--;

    while (left < right) {
        if (*left != *right) {
            isPalindrome = 0;
            break;
        }
        left++;
        right--;
    }

    if (isPalindrome)
        printf("Palindrome\n");
    else
        printf("Not a palindrome\n");

    return 0;
}
