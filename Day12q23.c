#include <stdio.h>

int main() {
    int daysLate;
    int fine = 0;

   
    printf("Enter number of late days: ");
    scanf("%d", &daysLate);

    
    if (daysLate <= 0) {
        fine = 0;
        printf("No fine.\n");
    } else if (daysLate <= 5) {
        fine = daysLate * 2;
        printf("Fine = ₹%d\n", fine);
    } else if (daysLate <= 10) {
        fine = 5 * 2 + (daysLate - 5) * 4;
        printf("Fine = ₹%d\n", fine);
    } else if (daysLate <= 30) {
        fine = 5 * 2 + 5 * 4 + (daysLate - 10) * 6;
        printf("Fine = ₹%d\n", fine);
    } else {
        printf("Membership Cancelled!\n");
    }

    return 0;
}
