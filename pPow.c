#include <stdio.h>
#include <math.h>

    double power(double base, double exponent) {
    double result = pow(base, exponent);
    return result;
}
void main() {
    double base;
    double exponent;
    printf("Enter the base: ");
    scanf("%lf", &base);
    printf("Enter the exponent: ");
    scanf("%lf", &exponent);
    double solution = power(base, exponent);
    printf("The result is: %lf\n", solution);
}