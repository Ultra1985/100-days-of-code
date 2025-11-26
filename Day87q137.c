#include <stdio.h>

enum UserRole {
    ADMIN,
    USER,
    GUEST
};

int main() {
    enum UserRole role;

    // Example usage: loop through all roles
    for (role = ADMIN; role <= GUEST; role++) {
        switch (role) {
            case ADMIN:
                printf("Role: ADMIN - You have full access.\n");
                break;
            case USER:
                printf("Role: USER - You have limited access.\n");
                break;
            case GUEST:
                printf("Role: GUEST - You have guest access.\n");
                break;
            default:
                printf("Unknown role.\n");
        }
    }

    return 0;
}
