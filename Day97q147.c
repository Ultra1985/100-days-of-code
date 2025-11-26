#include <stdio.h>

struct Date {
    int day;
    int month;
    int year;
};

struct Employee {
    char name[50];
    int id;
    struct Date joiningDate;
};

int main() {
    struct Employee emp1 = {
        "John Smith",
        12345,
        {15, 8, 2020}
    };

    FILE *fp;

    // Write employee data to binary file
    fp = fopen("employee.dat", "wb");
    if (fp == NULL) {
        printf("Error opening file for writing.\n");
        return 1;
    }
    fwrite(&emp1, sizeof(struct Employee), 1, fp);
    fclose(fp);
    printf("Employee data written to file successfully.\n");

    // Read employee data from binary file
    struct Employee empRead;
    fp = fopen("employee.dat", "rb");
    if (fp == NULL) {
        printf("Error opening file for reading.\n");
        return 1;
    }
    fread(&empRead, sizeof(struct Employee), 1, fp);
    fclose(fp);

    // Display read data
    printf("\nEmployee data read from file:\n");
    printf("Name: %s\n", empRead.name);
    printf("ID: %d\n", empRead.id);
    printf("Joining Date: %02d/%02d/%04d\n", empRead.joiningDate.day, empRead.joiningDate.month, empRead.joiningDate.year);

    return 0;
}
