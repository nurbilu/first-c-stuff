#include <stdio.h>
// אמנם מקבל מספרים אבל אם המספר הבא אינו מספר בסדרה עולה הפונקציה מחזירה 0 ולא מחכ לזקיף -1 בשביל לסיים את הסדרה
int is_increasing_sequence() {
    int prev, curr;
    if (scanf("%d", &prev) != 1 || prev == -1) {
        return 1;
    }
    while (scanf("%d", &curr) == 1 && curr != -1) {
        if (curr <= prev) {
            return 0;
        } else {
            prev = curr;
        }
    }
    return 1;
}

void main() {
    printf("Enter a sequence of natural numbers, ending with -1:\n");
    int result = is_increasing_sequence();
    printf("%d\n", result);
}
