#include <stdio.h>

typedef enum {
    ADMIN,
    USER,
    GUEST
} Role;

int main() {
    const char *names[] = {"ADMIN", "USER", "GUEST"};

    for (int i = ADMIN; i <= GUEST; i++) {
        printf("%s = %d\n", names[i], i);
    }

    return 0;
}
