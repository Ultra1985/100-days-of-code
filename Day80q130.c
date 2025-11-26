#include <stdio.h>

typedef struct {
    char name[50];
    int roll;
    float marks;
} Student;

int main() {
    FILE *fp;
    int n;

    printf("Enter number of students: ");
    scanf("%d", &n);

    Student students[n];

    // Input student data
    for (int i = 0; i < n; i++) {
        printf("Enter name, roll number and marks for student %d:\n", i + 1);
        scanf("%s %d %f", students[i].name, &students[i].roll, &students[i].marks);
    }

    // Write data to file
    fp = fopen("students.txt", "w");
    if (fp == NULL) {
        printf("Error opening file for writing.\n");
        return 1;
    }

    for (int i = 0; i < n; i++) {
        fprintf(fp, "%s %d %.2f\n", students[i].name, students[i].roll, students[i].marks);
    }
    fclose(fp);

    printf("\nData saved successfully to students.txt\n\n");

    // Read and display data from file
    fp = fopen("students.txt", "r");
    if (fp == NULL) {
        printf("Error opening file for reading.\n");
        return 1;
    }

    printf("Student Records:\n");
    while (fscanf(fp, "%s %d %f", students[0].name, &students[0].roll, &students[0].marks) == 3) {
        printf("Name: %s, Roll: %d, Marks: %.2f\n", students[0].name, students[0].roll, students[0].marks);
    }

    fclose(fp);

    return 0;
}
