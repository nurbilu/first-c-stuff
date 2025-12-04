#include <stdio.h>

int rec_count_lower_than_num(int num) {
    int val;
    scanf("%d", &val);
    if (val == -1)
        return 0;
    return (val < num) + rec_count_lower_than_num(num);
}

int main() {
    int num;
    printf("Enter num: ");
    scanf("%d", &num);
    printf("Enter a sequence of numbers ending with -1:\n");
    int count = rec_count_lower_than_num(num);
    printf("Count of numbers lower than %d: %d\n", num, count);
    return 0;
}
