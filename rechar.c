#include <stdio.h>
#include <math.h>

#define PI 3.141592
void main() {
    // const double PI = 3.141592;
    int radius;
    printf("The value of pi is %f\n", PI);
    printf("Enter the radius of the circle: ");
    scanf("%d", &radius);
    double area = PI * radius * radius;
    double circumference = 2 * PI * radius;
    printf("The area of the circle is %.4f\n", area);
    printf("The circumference of the circle is %.4f\n", circumference);
}