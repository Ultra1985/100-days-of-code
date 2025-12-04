#include <stdio.h>
#include <stdlib.h>   

struct Student {
    char name[50];
    int age;
    float marks;
};

int main() {
    
    struct Student *s = (struct Student *)malloc(sizeof(struct Student));

    if (s == NULL) {
        printf("Memory allocation failed!\n");
        return 1;
    }

    
    printf("Enter name: ");
    scanf("%s", s->name);

    printf("Enter age: ");
    scanf("%d", &s->age);

    printf("Enter marks: ");
    scanf("%f", &s->marks);

    
    printf("\n--- Student Details ---\n");
    printf("Name: %s\n", s->name);
    printf("Age: %d\n", s->age);
    printf("Marks: %.2f\n", s->marks);

    
    free(s);

    return 0;
}
