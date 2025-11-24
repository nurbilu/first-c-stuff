#include <stdio.h>

void main()
{
int number, i, isPrime;
printf("\2\n");
for (number = 3; number <= 100; number++)
{
    isPrime = 1;
    for (i = 3; i*i<= number; i+=2) {
        if (number % i == 0) {
            isPrime =0;
            break;
        }
    }
    if (isPrime)
        printf ("%d\n", number);
}
}

