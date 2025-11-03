#include <stdio.h>
#include <string.h>

int main() {
    char name[100];
    int i, len;

    printf("Enter your full name: ");
    fgets(name, sizeof(name), stdin);

    len = strlen(name);

    printf("Formatted name: ");

  
    for (i = 0; i < len; i++) {
        if (i == 0 && name[i] != ' ') {
            printf("%c. ", name[i]);
        } else if (name[i] == ' ' && name[i + 1] != ' ' && name[i + 1] != '\0') {
          
            int j = i + 1;
            int isLast = 1;
            while (name[j] != '\0' && name[j] != '\n') {
                if (name[j] == ' ') {
                    isLast = 0;
                    break;
                }
                j++;
            }
            if (isLast) {
                printf("%s", &name[i + 1]);
                break;
            } else {
                printf("%c. ", name[i + 1]);
            }
        }
    }

    return 0;
}
