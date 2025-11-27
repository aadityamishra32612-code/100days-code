#include <stdio.h>

int main() {
    FILE *fp;
    int n, roll, marks;
    char name[100];

   
    fp = fopen("students.txt", "w");
    if (!fp) {
        printf("Error opening file!\n");
        return 1;
    }

    printf("Enter number of students: ");
    scanf("%d", &n);

    for (int i = 0; i < n; i++) {
        printf("Enter name, roll number, marks: ");
        scanf("%s %d %d", name, &roll, &marks);

        
        fprintf(fp, "%s %d %d\n", name, roll, marks);
    }

    fclose(fp);

    printf("\nRecords saved successfully.\n\n");

    
    fp = fopen("students.txt", "r");
    if (!fp) {
        printf("Error reading file!\n");
        return 1;
    }

    printf("Student Records:\n");

    while (fscanf(fp, "%s %d %d", name, &roll, &marks) == 3) {
        printf("Name: %s  Roll: %d  Marks: %d\n", name, roll, marks);
    }

    fclose(fp);
    return 0;
}
