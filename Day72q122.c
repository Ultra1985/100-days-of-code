#include <stdio.h>

int main() {
    FILE *fp;
    char line[256];

    // Open the file in read mode
    fp = fopen("info.txt", "r");
    if (fp == NULL) {
        printf("Error: Could not open file.\n");
        return 1;
    }

    // Read each line until EOF and print it
    while (fgets(line, sizeof(line), fp) != NULL) {
        printf("%s", line);
    }

    fclose(fp);
    return 0;
}
