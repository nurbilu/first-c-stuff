#include <stdio.h>

void main() {
    char choice;
    do {
        int num;
        printf("Please enter a number: ");
        scanf("%d", &num);

        int abs_num;

        if (num < 0) {
            abs_num = -num;
        } else {
            abs_num = num;
        }

        printf("The absolute value: %d\n", abs_num);

        for (int i = 0; i < abs_num; i++) {
            printf("*");
        }
        if (abs_num > 0) {
            printf("\n");
        }

        printf("Do you want to restart the program? (y/n): ");
        while ((getchar()) != '\n');
        scanf("%c", &choice);

    } while (choice == 'y' || choice == 'Y');
}