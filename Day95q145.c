#include <stdio.h>

struct Student {
    char name[50];
    int roll_no;
    float marks;
};

// Function to find and return the top student
struct Student getTopStudent(struct Student students[], int n) {
    struct Student top = students[0];

    for (int i = 1; i < n; i++) {
        if (students[i].marks > top.marks) {
            top = students[i];
        }
    }

    return top;
}

int main() {
    struct Student students[5] = {
        {"Alice", 101, 85.5},
        {"Bob", 102, 90.0},
        {"Charlie", 103, 78.0},
        {"David", 104, 92.5},
        {"Eva", 105, 88.0}
    };

    struct Student topStudent = getTopStudent(students, 5);

    printf("Top Student Details:\n");
    printf("Name: %s\n", topStudent.name);
    printf("Roll Number: %d\n", topStudent.roll_no);
    printf("Marks: %.2f\n", topStudent.marks);

    return 0;
}
