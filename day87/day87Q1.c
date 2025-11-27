#include <stdio.h>

typedef enum {
    ADMIN = 1,
    USER,
    GUEST
} Role;

int main() {
    int choice;

    printf("Select Role:\n");
    printf("1. ADMIN\n");
    printf("2. USER\n");
    printf("3. GUEST\n");
    printf("Enter choice: ");
    scanf("%d", &choice);

    switch ((Role)choice) {
        case ADMIN:
            printf("Welcome, Admin! You have full access.\n");
            break;
        case USER:
            printf("Hello, User! You have limited access.\n");
            break;
        case GUEST:
            printf("Hi, Guest! You can only view content.\n");
            break;
        default:
            printf("Invalid role selected.\n");
    }

    return 0;
}
