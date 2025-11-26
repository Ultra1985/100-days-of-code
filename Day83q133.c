#include <stdio.h>

enum Months {
    JANUARY,
    FEBRUARY,
    MARCH,
    APRIL,
    MAY,
    JUNE,
    JULY,
    AUGUST,
    SEPTEMBER,
    OCTOBER,
    NOVEMBER,
    DECEMBER
};

int main() {
    enum Months month;
    int days;

    for (month = JANUARY; month <= DECEMBER; month++) {
        switch (month) {
            case JANUARY:   days = 31; break;
            case FEBRUARY:  days = 28; break;  // Non-leap year
            case MARCH:     days = 31; break;
            case APRIL:     days = 30; break;
            case MAY:       days = 31; break;
            case JUNE:      days = 30; break;
            case JULY:      days = 31; break;
            case AUGUST:    days = 31; break;
            case SEPTEMBER: days = 30; break;
            case OCTOBER:   days = 31; break;
            case NOVEMBER:  days = 30; break;
            case DECEMBER:  days = 31; break;
            default:        days = 0; break;
        }

        // Print month name and days
        switch (month) {
            case JANUARY:   printf("January: %d days\n", days); break;
            case FEBRUARY:  printf("February: %d days\n", days); break;
            case MARCH:     printf("March: %d days\n", days); break;
            case APRIL:     printf("April: %d days\n", days); break;
            case MAY:       printf("May: %d days\n", days); break;
            case JUNE:      printf("June: %d days\n", days); break;
            case JULY:      printf("July: %d days\n", days); break;
            case AUGUST:    printf("August: %d days\n", days); break;
            case SEPTEMBER: printf("September: %d days\n", days); break;
            case OCTOBER:   printf("October: %d days\n", days); break;
            case NOVEMBER:  printf("November: %d days\n", days); break;
            case DECEMBER:  printf("December: %d days\n", days); break;
        }
    }

    return 0;
}
