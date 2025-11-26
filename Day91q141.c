#include <stdio.h>

struct Student {
    char name[50];
    int roll_no;
    float marks;
};

int main() {
    struct Student s;

    printf("Enter student's name: ");
  
    fgets(s.name, sizeof(s.name), stdin);

    
    size_t len = 0;
    while (s.name[len] != '\0') {
        if (s.name[len] == '\n') {
            s.name[len] = '\0';
            break;
        }
        len++;
    }

    printf("Enter roll number: ");
    scanf("%d", &s.roll_no);

    printf("Enter marks: ");
    scanf("%f", &s.marks);

    printf("\nStudent Details:\n");
    printf("Name: %s\n", s.name);
    printf("Roll Number: %d\n", s.roll_no);
    printf("Marks: %.2f\n", s.marks);

    return 0;
}
