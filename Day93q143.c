#include <stdio.h>

struct Student {
    char name[50];
    int roll_no;
    float marks;
};

int main() {
    struct Student students[5];

    for (int i = 0; i < 5; i++) {
        printf("Enter details for student %d:\n", i + 1);

        printf("Name: ");
        getchar();  // Clear input buffer before fgets
        fgets(students[i].name, sizeof(students[i].name), stdin);

        // Remove trailing newline from fgets
        int len = 0;
        while (students[i].name[len] != '\0') {
            if (students[i].name[len] == '\n') {
                students[i].name[len] = '\0';
                break;
            }
            len++;
        }

        printf("Roll Number: ");
        scanf("%d", &students[i].roll_no);

        printf("Marks: ");
        scanf("%f", &students[i].marks);
    }

    // Find student with highest marks
    int highestIndex = 0;
    for (int i = 1; i < 5; i++) {
        if (students[i].marks > students[highestIndex].marks) {
            highestIndex = i;
        }
    }

    printf("\nStudent with the highest marks:\n");
    printf("Name: %s\n", students[highestIndex].name);
    printf("Roll Number: %d\n", students[highestIndex].roll_no);
    printf("Marks: %.2f\n", students[highestIndex].marks);

    return 0;
}
