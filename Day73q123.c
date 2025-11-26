#include <stdio.h>
#include <ctype.h>

int main() {
    FILE *fp;
    fp = fopen("info.txt", "r");
    if (fp == NULL) {
        printf("Error opening file.\n");
        return 1;
    }

    int chars = 0, words = 0, lines = 0;
    int inWord = 0;
    char c;

    while ((c = fgetc(fp)) != EOF) {
        chars++;

        if (c == '\n')
            lines++;

        if (isspace(c)) {
            // If we were inside a word and encounter space, word ended
            if (inWord) {
                words++;
                inWord = 0;
            }
        } else {
            // Non-space character means inside a word
            inWord = 1;
        }
    }

    // If file doesn't end with space, count last word
    if (inWord)
        words++;

    // If file is not empty and last line doesn't end with '\n', count last line
    if (chars > 0 && c != '\n')
        lines++;

    fclose(fp);

    printf("Characters: %d\n", chars);
    printf("Words: %d\n", words);
    printf("Lines: %d\n", lines);

    return 0;
}
