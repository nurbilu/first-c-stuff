#include <stdio.h>

int main() {
    int num;
    int min_value;
    int min_position;
    int current_position = 0;
    int first = 1;

    while (1) {
        scanf("%d", &num);

        if (num == 100) {
            break;
        }

        current_position++;

        if (first) {
            min_value = num;
            min_position = current_position;
            first = 0;
        } else if (num < min_value) {
            min_value = num;
            min_position = current_position;
        }
    }

    printf("%d %d\n", min_value, min_position);

    return 0;
}

