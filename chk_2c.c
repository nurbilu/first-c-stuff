#include <stdio.h>
void main() {
    int x=49;
    char y='a';
    printf("x is %d, and y is '%c'.\n", x, y);
    printf("x is %d, and y is %d (ASCII value).\n", x, y);
    printf("x_new is %d, and y_new is %d (ASCII value).\n", x+1, y+1);
    printf("x_new is %d, and y_new is %c.\n", x+1, y+1);
}