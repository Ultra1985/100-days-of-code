#include <stdio.h>

int main() {
    char filename[100];
    char text[1000];

    printf("Enter the filename to append to: ");
    scanf("%s", filename);

    FILE *fp = fopen(filename, "a");  // Open in append mode
    if (fp == NULL) {
        printf("Error opening file.\n");
        return 1;
    }

    getchar(); // Consume leftover newline from previous input

    printf("Enter the text to append: ");
    fgets(text, sizeof(text), stdin);

    fprintf(fp, "%s", text);  // Append text

    fclose(fp);

    printf("Text appended successfully.\n");

    return 0;
}
