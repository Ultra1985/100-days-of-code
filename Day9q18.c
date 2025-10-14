#include <stdio.h>

int main() {
    float percentage;
    char grade;

    
    printf("Enter percentage (0-100): ");
    scanf("%f", &percentage);

    
    if (percentage < 0 || percentage > 100) {
        printf("Invalid percentage. Please enter a value between 0 and 100.\n");
        return 1;
    }

    
    if (percentage >= 90) {
        grade = 'A';
    } else if (percentage >= 80) {
        grade = 'B';
    } else if (percentage >= 70) {
        grade = 'C';
    } else if (percentage >= 60) {
        grade = 'D';
    } else {
        grade = 'F';
    }

    
    printf("Percentage: %.2f%%, Grade: %c\n", percentage, grade);

    return 0;
}
