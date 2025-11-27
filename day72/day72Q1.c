#include <stdio.h>

int main() {
    FILE *fp;
    char buffer[200];

    
    fp = fopen("info.txt", "r");

    if (fp == NULL) {
        printf("Error: Unable to open file!\n");
        return 1;
    }

   
    while (fgets(buffer, sizeof(buffer), fp) != NULL) {
        printf("%s", buffer);
    }

    
    fclose(fp);

    return 0;
}
