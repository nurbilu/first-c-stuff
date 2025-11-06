#include <stdio.h>
#include <math.h>

void main() {
    int num;
    int num2;

    printf("please enter a number: ");
    scanf("%d", &num);
    printf("please enter another number: ");
    scanf("%d", &num2);
    int modulus = num % num2;
    printf("The modulus of %d and %d is %d\n", num, num2, modulus);
}