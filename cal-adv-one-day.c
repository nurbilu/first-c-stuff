#include <stdio.h>

int daysInMonth(int year, int month);

void main() {
    int year, month, day;
    printf("Enter the year: ");
    scanf("%d", &year);
    printf("Enter the month: ");
    scanf("%d", &month);
    printf("Enter the day: ");
    scanf("%d", &day);
    if (year < 0 || month < 1 || month > 12 || day < 1 || day > daysInMonth(year, month)) {
        printf("Invalid date\n");
        return;
    }

    int days = daysInMonth(year, month);
    if (day < days) {
        day++;
    } else if (month < 12) {
        month++;
        day = 1;
    } else {
        year++;
        month = 1;
        day = 1;
    }

    printf("Next day: %d/%d/%d\n", month, day, year);
}

int daysInMonth(int year, int month) {
    int daysInMonth[] = {31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31};
    if (month == 2 && ((year % 4 == 0 && year % 100 != 0) || (year % 400 == 0))) {
        return 29;
    } else if (month == 4 || month == 6 || month == 9 || month == 11) {
        return 30;
    } else if (month == 2) {
        return 28;
    } else {
        return 31;
    }
}