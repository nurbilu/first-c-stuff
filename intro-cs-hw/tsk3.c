#include <stdio.h>

#define WORK_DAYS_PER_WEEK 5
#define HOURS_PER_DAY 8
void main() {
    long id;
    double hourlyWage;
    int hoursPerDay;
    int workDaysPerWeek;
    int currentYear;
    int startYear;

    printf("Enter your ID number: ");
    scanf("%ld", &id);

    printf("Enter your hourly wage: ");
    scanf("%lf", &hourlyWage);

    printf("Enter number of work hours per day: ");
    scanf("%d", &hoursPerDay);

    printf("Enter number of work days per week: ");
    scanf("%d", &workDaysPerWeek);

    printf("Enter the current year you were fired: ");
    scanf("%d", &currentYear);

    printf("Enter the year you started working: ");
    scanf("%d", &startYear);

    int yearsWorked = currentYear - startYear;
    int workDaysInMonth = workDaysPerWeek * 4; 
    int workHoursInMonth = workDaysInMonth * hoursPerDay;
    double monthlyWage = hourlyWage * workHoursInMonth;
    double compensation = yearsWorked * monthlyWage;

    printf("ID: %ld, Compensation: %.2lf\n", id, compensation);
}

