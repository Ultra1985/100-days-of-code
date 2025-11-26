#include <stdio.h>

enum Status {
    SUCCESS = 10,
    FAILURE = 11,
    TIMEOUT = 12
};

int main() {
    enum Status code;

    for (code = SUCCESS; code <= TIMEOUT; code++) {
        printf("Status code %d: ", code);
        switch (code) {
            case SUCCESS:
                printf("SUCCESS\n");
                break;
            case FAILURE:
                printf("FAILURE\n");
                break;
            case TIMEOUT:
                printf("TIMEOUT\n");
                break;
            default:
                printf("Unknown\n");
        }
    }

    return 0;
}
