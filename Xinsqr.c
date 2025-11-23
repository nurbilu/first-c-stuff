#include <stdio.h>
#include <math.h>
void main() {
    double x;
    printf("Enter x: ");
    scanf("%lf", &x);
    printf("x^2 = %.0lf\nx^4 = %.0lf\nx^6 = %.0lf\nx^8 = %.0lf\n", pow(x,2), pow(x,4), pow(x,6), pow(x,8));
}


