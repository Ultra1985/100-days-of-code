#include <stdio.h>
#include <string.h>

int main() {
    char date[20], day[3], month[3], year[5];
    char newDate[20];
    char *monthName;

    printf("Enter date in format dd/mm/yyyy: ");
    scanf("%s", date);

    
    strncpy(day, date, 2);
    day[2] = '\0';
    strncpy(month, date + 3, 2);
    month[2] = '\0';
    strcpy(year, date + 6);

    
    if (strcmp(month, "01") == 0) monthName = "Jan";
    else if (strcmp(month, "02") == 0) monthName = "Feb";
    else if (strcmp(month, "03") == 0) monthName = "Mar";
    else if (strcmp(month, "04") == 0) monthName = "Apr";
    else if (strcmp(month, "05") == 0) monthName = "May";
    else if (strcmp(month, "06") == 0) monthName = "Jun";
    else if (strcmp(month, "07") == 0) monthName = "Jul";
    else if (strcmp(month, "08") == 0) monthName = "Aug";
    else if (strcmp(month, "09") == 0) monthName = "Sep";
    else if (strcmp(month, "10") == 0) monthName = "Oct";
    else if (strcmp(month, "11") == 0) monthName = "Nov";
    else if (strcmp(month, "12") == 0) monthName = "Dec";
    else monthName = "Invalid";

    
    sprintf(newDate, "%s-%s-%s", day, monthName, year);

    printf("Converted date: %s\n", newDate);

    return 0;
}
