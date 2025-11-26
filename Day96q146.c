#include <stdio.h>

// Define Date structure
struct Date {
    int day;
    int month;
    int year;
};

// Define Employee structure with nested Date
struct Employee {
    char name[50];
    int id;
    struct Date joiningDate;
};

// Function to print employee details
void printEmployee(struct Employee emp) {
    printf("Employee Details:\n");
    printf("Name: %s\n", emp.name);
    printf("ID: %d\n", emp.id);
    printf("Joining Date: %02d/%02d/%04d\n", emp.joiningDate.day, emp.joiningDate.month, emp.joiningDate.year);
}

int main() {
    struct Employee emp1 = {
        "John Smith",
        12345,
        {15, 8, 2020}  // joiningDate: 15th August 2020
    };

    printEmployee(emp1);

    return 0;
}
