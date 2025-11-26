#include <stdio.h>
#include <ctype.h>

int main() {
    FILE *inFile = fopen("input.txt", "r");
    if (inFile == NULL) {
        printf("Error: Could not open input.txt\n");
        return 1;
    }

    FILE *outFile = fopen("output.txt", "w");
    if (outFile == NULL) {
        printf("Error: Could not open output.txt\n");
        fclose(inFile);
        return 1;
    }

    int ch;
    while ((ch = fgetc(inFile)) != EOF) {
        // Convert lowercase letters to uppercase
        if (islower(ch)) {
            ch = toupper(ch);
        }
        fputc(ch, outFile);
    }

    fclose(inFile);
    fclose(outFile);

    printf("Conversion completed. Check output.txt\n");

    return 0;
}
