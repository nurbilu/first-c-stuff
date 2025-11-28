#include <stdio.h>

// Function to find GCD using Euclidean algorithm
int find_gcd(int a, int b) {
    if (a == 0 && b == 0) {
        return 0;
    }
    while (b != 0) {
        int temp = b;
        b = a % b;
        a = temp;
    }
    return (a < 0) ? -a : a;
}

// find LCM 
int find_lcm(int a, int b) {
    return (a * b) / find_gcd(a, b);
}

int main() {
    int choice;
    printf("Menu:\n");
    printf("1. Find GCD\n");
    printf("2. Find LCM\n");
    printf("Enter your choice: ");
    if (scanf("%d", &choice) != 1) {
        printf("Invalid input.\n");
        return 1;
    }

    int num1, num2;
    printf("Enter two integers (can be negative): ");
    if (scanf("%d %d", &num1, &num2) != 2) {
        printf("Invalid input.\n");
        return 1;
    }
    if (num1 == 0 && num2 == 0) {
        printf("At least one integer must be non-zero.\n");
        return 1;
    }

    if (choice == 1) {
        printf("The GCD of %d and %d is: %d\n", num1, num2, find_gcd(num1, num2));
    } else if (choice == 2) {
        printf("The LCM of %d and %d is: %d\n", num1, num2, find_lcm(num1, num2));
        printf("The GCD of %d and %d is: %d\n", num1, num2, find_gcd(num1, num2));
    }

    return 0;
}

