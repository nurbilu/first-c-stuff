#include <stdio.h>

void main() {
    int distance;
    int speed;

    printf("Enter the distance between cities A and B in kilometers: ");
    scanf("%d", &distance);

    printf("Enter the speed of the car in km/h: ");
    scanf("%d", &speed);

    double time = (double)distance / speed;
    int hours = (int)time;
    int minutes = (int)((time - hours) * 60 + 0.5); 

    printf("The travel time is %d hours and %d minutes.\n", hours, minutes);
}
