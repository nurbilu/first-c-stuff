#include <stdio.h>



int rec_len_of_num(int num) {
    if (num == 0) {
        return 0;
    }
    return rec_len_of_num(num / 10) + 1;
}

int rec_sum_all_digits(int num) {
    if (num == 0) {
        return 0;
    }
    return rec_sum_all_digits(num / 10) + num % 10;
}

int rec_num_ser_is_increasing(int num) {
    if (num < 10)
        return 1;
    if (num % 10 >= (num / 10) % 10)
        return 0;
    return rec_num_ser_is_increasing(num / 10);
}

void main() {
    int num;
    printf("Enter a number: ");
    scanf("%d", &num);
    int result = rec_len_of_num(num);
    int result2 = rec_sum_all_digits(num);
    int result3 = rec_num_ser_is_increasing(num);
    printf("The length of the number (recursive): %d\n", result);
    printf("The sum of all digits (recursive): %d\n", result2);
    printf("The number series is increasing (recursive): %d\n", result3);
}