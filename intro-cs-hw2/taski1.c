#include <stdio.h>


int is_arithmetic_sequence(int a, int b, int c, int d) {
    int diff1 = b - a;
    int diff2 = c - b;
    int diff3 = d - c;

    if (diff1 == diff2 && diff2 == diff3) {
        return 1;
    } else if (diff1 != diff2 || diff2 != diff3) {
        return 0;
    }
}

void main() {
    int a, b, c, d;
    printf("enter the value of a: ");
    scanf("%d", &a);
    printf("enter the value of b: ");
    scanf("%d", &b);
    printf("enter the value of c: ");
    scanf("%d", &c);
    printf("enter the value of d: ");
    scanf("%d", &d);

    int result = is_arithmetic_sequence(a, b, c, d);
    printf("%d\n", result);
}