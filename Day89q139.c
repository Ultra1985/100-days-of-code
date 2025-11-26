#include <stdio.h>

enum Colors {
    RED,        // 0
    GREEN = 5,  // 5
    BLUE        // 6 (auto increment from previous)
};

int main() {
    printf("RED = %d\n", RED);
    printf("GREEN = %d\n", GREEN);
    printf("BLUE = %d\n", BLUE);

    return 0;
}
