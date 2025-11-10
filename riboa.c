#include <stdio.h>
#include <math.h>

void main() {
    printf("Enter the length of the side of the square: ");
    double side;
    scanf("%lf", &side);
    double diagonal = sqrt(2) * side;
    printf("The length of the diagonal of the square is: %lf\n", diagonal);
}