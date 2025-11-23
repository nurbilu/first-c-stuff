#include <stdio.h>

int divides_without_remainder(int a, int b) {
    if (a == 0 || b == 0) {
        return 0;
    }
    if (b % a == 0 || a % b == 0) {
        return 1;
    } else {
        return 0;
    }
}

void main() {
    int a, b;
    printf("enter the value of a: ");
    scanf("%d", &a);
    printf("enter the value of b: ");
    scanf("%d", &b);
    int result = divides_without_remainder(a, b);
    printf("%d\n", result);
}

