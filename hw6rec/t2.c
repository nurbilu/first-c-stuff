#include <stdio.h>

int rec_fibon(int n) {
    if (n == 0) {
        return 0;
    }
    if (n == 1) {
        return 1;
    }
    if (n > 1) {
        return rec_fibon(n-1) + rec_fibon(n-2);
    }
}

int fibon_loop(int n) {
    int a = 0;
    int b = 1;
    int c;

    for (int i=2 ; i<=n ; i++){
        c=a+b;
        a=b;
        b=c;
    }
    return c;
}

void main() {
    int n;
    printf("Enter a number: ");
    scanf("%d", &n);
    int result = rec_fibon(n);
    int result2 = fibon_loop(n);
    printf("The %dth Fibonacci number (recursive): %d\n", n, result);
    printf("The %dth Fibonacci number (loop): %d\n", n, result2);
}