#include <stdio.h>

int main() {
    int num;
    char input[100];

    while (1) {
        printf("Enter a positive integer (or a letter to exit): ");
        if (scanf("%d", &num) != 1) {

            printf("Exiting...\n");
            break;
        }

        if (num < 1) {
            printf("Please enter a positive integer.\n");
            continue;
        }

        if (num % 2 == 0) {
            if (num % 3 == 0 && num % 5 != 0) {
                printf("Number Valid\n");
            } else {
                printf("Number Invalid\n");
            }
        } else {
            if (num % 7 != 0 && num % 11 != 0) {
                printf("Number Valid\n");
            } else {
                printf("Number Invalid\n");
            }
        }
    }

    return 0;
}