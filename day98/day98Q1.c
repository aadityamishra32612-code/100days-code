#include <stdio.h>
#include <string.h>

typedef struct {
    char name[50];
    int roll_no;
    float marks;
} Student;


int areIdentical(Student a, Student b) {
    return (strcmp(a.name, b.name) == 0 &&
            a.roll_no == b.roll_no &&
            a.marks == b.marks);
}

int main() {
    Student s1, s2;

    
    printf("Enter details of first student:\n");
    printf("Name: ");
    scanf("%s", s1.name);
    printf("Roll No: ");
    scanf("%d", &s1.roll_no);
    printf("Marks: ");
    scanf("%f", &s1.marks);

    
    printf("\nEnter details of second student:\n");
    printf("Name: ");
    scanf("%s", s2.name);
    printf("Roll No: ");
    scanf("%d", &s2.roll_no);
    printf("Marks: ");
    scanf("%f", &s2.marks);

    
    if (areIdentical(s1, s2))
        printf("\nStructures are identical.\n");
    else
        printf("\nStructures are NOT identical.\n");

    return 0;
}
