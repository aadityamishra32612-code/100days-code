#include <stdio.h>
#include <stdlib.h>

typedef struct {
    char name[50];
    int roll_no;
    float marks;
} Student;

int main() {
    
    Student *s = (Student *)malloc(sizeof(Student));

    if (s == NULL) {
        printf("Memory allocation failed!\n");
        return 1;
    }

   
    printf("Enter name: ");
    scanf("%s", s->name);

    printf("Enter roll number: ");
    scanf("%d", &s->roll_no);

    printf("Enter marks: ");
    scanf("%f", &s->marks);

    
    printf("\n--- Student Details ---\n");
    printf("Name: %s\n", s->name);
    printf("Roll No: %d\n", s->roll_no);
    printf("Marks: %.2f\n", s->marks);

    
    free(s);

    return 0;
}
