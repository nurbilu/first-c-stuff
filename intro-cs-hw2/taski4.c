#include <stdio.h>

int is_even_odd_digit_place(int n) {
    // If n is negative, convert to positive
    if (n < 0) n = -n;
    int pos = 0;
    while (n > 0) {
        int digit = n % 10;
        if (pos % 2 == 0) {
            // Even position, so digit must be even
            if (digit % 2 != 0) return 0;
        } else {
            // Odd position, so digit must be odd
            if (digit % 2 == 0) return 0;
        }
        n /= 10;
        pos++;
    }
    // Zero is considered to satisfy the condition as there are no digits that violate it
    return 1;
}

int main() {
    int n;
    printf("Enter an integer: ");
    scanf("%d", &n);
    int result = is_even_odd_digit_place(n);
    printf("%d\n", result);
    return 0;
}
