#include <stdio.h>

struct Student {
    int roll;
    float marks;
    char name[20];
};

int main() {
    struct Student s1 = {0, 0.0, ""};   
    struct Student *ptr;              

    ptr = &s1;

    
    printf("Enter roll number: ");
    scanf("%d", &ptr->roll);

    printf("Enter marks: ");
    scanf("%f", &ptr->marks);

    printf("Enter name: ");
    scanf("%s", ptr->name);   

   
    printf("\n---- Student Details ----\n");
    printf("Roll Number: %d\n", ptr->roll);
    printf("Marks: %.2f\n", ptr->marks);
    printf("Name: %s\n", ptr->name);

    return 0;
}
