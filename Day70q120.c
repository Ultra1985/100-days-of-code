#include <stdio.h>
#include <ctype.h>

int main() {
    char str[1000];
    fgets(str, sizeof(str), stdin);

    // Convert entire string to lowercase first
    for (int i = 0; str[i] != '\0'; i++) {
        str[i] = tolower(str[i]);
    }

    // Make first non-space character uppercase
    int i = 0;
    while (str[i] == ' ') i++;  // skip leading spaces
    if (str[i] != '\0')
        str[i] = toupper(str[i]);

    printf("%s", str);
    return 0;
}
