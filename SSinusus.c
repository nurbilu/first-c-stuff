#include <stdio.h>
#include <math.h>

#define PI 3.14159265358979323846

double sin_x(double radians) {
    return sin(radians);
}

double cos_x(double radians) {
    return cos(radians);
}

double tan_x(double radians) {
    return tan(radians);
}

double cot_x(double radians) {
    return 1.0 / tan(radians);
}

int main() {
    double x_degrees;
    printf("Enter the value of x in degrees: ");
    scanf("%lf", &x_degrees);

    // Convert degrees to radians
    double x_radians = x_degrees * (PI / 180.0);

    double sin_x_result = sin_x(x_radians);
    double cos_x_result = cos_x(x_radians);
    double tan_x_result = tan_x(x_radians);
    double cot_x_result = cot_x(x_radians);

    printf("The sine of %lf degrees is %lf\n", x_degrees, sin_x_result);
    printf("The cosine of %lf degrees is %lf\n", x_degrees, cos_x_result);
    printf("The tangent of %lf degrees is %lf\n", x_degrees, tan_x_result);
    printf("The cotangent of %lf degrees is %lf\n", x_degrees, cot_x_result);
    return 0;
}
