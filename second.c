#include <stdio.h>
#include <math.h>

void main() {
    printf("Hello, World!\n");
    int a;
    int b;
    printf("Enter a number: ");
    scanf("%d", &a);
    printf("Enter another number: ");
    scanf("%d", &b);
    int c = a + b;
    printf("The sum of %d and %d is %d\n", a, b, c);
    int d = sqrt(c);
    printf("The square root of %d is %d\n", c, d);
}
