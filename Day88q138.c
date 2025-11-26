#include <stdio.h>

enum UserRole {
    ADMIN,
    USER,
    GUEST,
    ROLE_COUNT  // Helper to get number of roles
};

int main() {
    const char *roleNames[] = {
        "ADMIN",
        "USER",
        "GUEST"
    };

    for (int i = 0; i < ROLE_COUNT; i++) {
        printf("%s = %d\n", roleNames[i], i);
    }

    return 0;
}
