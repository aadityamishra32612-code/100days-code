#include <stdio.h>

typedef struct {
    char name[50];
    int emp_id;
    float salary;
} Employee;

int main() {
    Employee e1, e2;   

    
    printf("Enter employee name: ");
    scanf("%s", e1.name);

    printf("Enter employee ID: ");
    scanf("%d", &e1.emp_id);

    printf("Enter salary: ");
    scanf("%f", &e1.salary);

    
    FILE *fw = fopen("employee.dat", "wb");
    if (!fw) {
        printf("Error opening file for writing!\n");
        return 1;
    }

    fwrite(&e1, sizeof(Employee), 1, fw);
    fclose(fw);

    printf("\nEmployee data written to employee.dat\n");

   
    FILE *fr = fopen("employee.dat", "rb");
    if (!fr) {
        printf("Error opening file for reading!\n");
        return 1;
    }

    fread(&e2, sizeof(Employee), 1, fr);
    fclose(fr);

   
    printf("\n--- Employee Data Read From File ---\n");
    printf("Name: %s\n", e2.name);
    printf("ID: %d\n", e2.emp_id);
    printf("Salary: %.2f\n", e2.salary);

    return 0;
}
