#include <stdio.h>

int main() {
    char src[100], dest[100];
    FILE *fs, *fd;
    int ch;

    printf("Enter source filename: ");
    scanf("%s", src);

    printf("Enter destination filename: ");
    scanf("%s", dest);

    fs = fopen(src, "r");
    if (!fs) {
        printf("Cannot open source file!\n");
        return 1;
    }

    fd = fopen(dest, "w");
    if (!fd) {
        printf("Cannot open destination file!\n");
        fclose(fs);
        return 1;
    }

    while ((ch = fgetc(fs)) != EOF) {
        fputc(ch, fd);
    }

    printf("File copied successfully.\n");

    fclose(fs);
    fclose(fd);

    return 0;
}
