#include <stdio.h>

int main() {
    int day;

    
    printf("Enter a number (1-7) to get the day of the week: ");
    scanf("%d", &day);

    
    switch(day) {
        case 1:
            printf("1 => Sunday\n");
            break;
        case 2:
            printf("2 => Monday\n");
            break;
        case 3:
            printf("3 => Tuesday\n");
            break;
        case 4:
            printf("4 => Wednesday\n");
            break;
        case 5:
            printf("5 => Thursday\n");
            break;
        case 6:
            printf("6 => Friday\n");
            break;
        case 7:
            printf("7 => Saturday\n");
            break;
        default:
            printf("Invalid input! Please enter a number between 1 and 7.\n");
    }

    return 0;
}
