#include <stdio.h>

void main() {
    printf("please enter your age: ");
    int age;
    scanf("%d", &age);
    printf("please enter the current year: ");
    int currentYear;
    scanf("%d", &currentYear);
    int yearOfBirth = currentYear - age;
    printf("your age is %d, the current year is %d, your year of birth is %d", age, currentYear, yearOfBirth);
}
