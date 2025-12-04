#include <stdio.h>

int rec_num_is_even(int num) {
    
    if (num%2 == 0) {
        return 1;
    }

    if (num % 2 != 0) {
        return 0;
    }

    return rec_num_is_even(num / 10);

}

int main() {
    int num;
    printf("Enter a number: ");
    scanf("%d", &num);
    int result = rec_num_is_even(num);
    printf("%d\n", result);
        return 0;
    }