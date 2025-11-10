#include <stdio.h>
#include <time.h>

int days_in_month(int year, int month) {
    int days[] = {31,28,31,30,31,30,31,31,30,31,30,31};
    if (month == 2) {
        if ((year % 4 == 0 && year % 100 != 0) || (year % 400 == 0))
            return 29;
    }
    return days[month - 1];
}

int main() {
    time_t t = time(NULL);
    struct tm tm = *localtime(&t);
    int currYear = tm.tm_year + 1900;
    int currMonth = tm.tm_mon + 1;
    int currDay = tm.tm_mday;

    int birthYear, birthMonth, birthDay;

    printf("Enter your birth year: ");
    scanf("%d", &birthYear);
    printf("Enter your birth month: ");
    scanf("%d", &birthMonth);
    printf("Enter your birth day: ");
    scanf("%d", &birthDay);

    int ageYears = currYear - birthYear;
    int ageMonths = currMonth - birthMonth;
    int ageDays = currDay - birthDay;

    if (ageDays < 0) {
        if (currMonth == 1) {
            ageDays += days_in_month(currYear - 1, 12);
        } else {
            ageDays += days_in_month(currYear, currMonth - 1);
        }
        ageMonths--;
    }
    if (ageMonths < 0) {
        ageMonths += 12;
        ageYears--;
    }

    printf("Your age is: %d years, %d months, %d days\n", ageYears, ageMonths, ageDays);


}