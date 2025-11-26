#include <stdio.h>

enum Status {
    SUCCESS,
    FAILURE,
    TIMEOUT
};

int main() {
    enum Status code;

    // Example usage: loop through all statuses
    for (code = SUCCESS; code <= TIMEOUT; code++) {
        switch (code) {
            case SUCCESS:
                printf("Status: SUCCESS - Operation completed successfully.\n");
                break;
            case FAILURE:
                printf("Status: FAILURE - Operation failed.\n");
                break;
            case TIMEOUT:
                printf("Status: TIMEOUT - Operation timed out.\n");
                break;
            default:
                printf("Status: Unknown code.\n");
        }
    }

    return 0;
}
