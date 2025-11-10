#include <stdio.h>

int main() {
    int a, b, c;
    char input[100];

    while (1) {
        printf("Enter three integers (or q to quit):\n");
        if (scanf("%d %d %d", &a, &b, &c) != 3) {
            scanf("%s", input); 
            if (input[0] == 'q' || input[0] == 'Q') {
                printf("Exiting...\n");
                break;
            } else {
                printf("Invalid input.\n");
                while (getchar() != '\n');
                continue;
            }
        }

        ( (a % b == 0 || b % a == 0) && 
          (a % c == 0 || c % a == 0) && 
          (b % c == 0 || c % b == 0) ) ?
            printf("Numbers Valid\n") :
            printf("Numbers Invalid\n");
    }

    return 0;
}