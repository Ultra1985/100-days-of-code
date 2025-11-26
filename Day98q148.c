#include <stdio.h>
#include <string.h>

struct Student {
    char name[50];
    int roll_no;
    float marks;
};

// Function to read student data
void readStudent(struct Student *s) {
    printf("Enter name: ");
    getchar(); // Clear input buffer before fgets
    fgets(s->name, sizeof(s->name), stdin);

    // Remove trailing newline from fgets
    int len = 0;
    while (s->name[len] != '\0') {
        if (s->name[len] == '\n') {
            s->name[len] = '\0';
            break;
        }
        len++;
    }

    printf("Enter roll number: ");
    scanf("%d", &s->roll_no);

    printf("Enter marks: ");
    scanf("%f", &s->marks);
}

// Function to compare two students
int areStudentsEqual(struct Student s1, struct Student s2) {
    if (strcmp(s1.name, s2.name) == 0 &&
        s1.roll_no == s2.roll_no &&
        s1.marks == s2.marks) {
        return 1; // equal
    }
    return 0; // not equal
}

int main() {
    struct Student student1, student2;

    printf("Enter details for Student 1:\n");
    readStudent(&student1);

    printf("\nEnter details for Student 2:\n");
    readStudent(&student2);

    if (areStudentsEqual(student1, student2)) {
        printf("\nThe two students are identical.\n");
    } else {
        printf("\nThe two students are NOT identical.\n");
    }

    return 0;
}
