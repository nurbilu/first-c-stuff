#include <stdio.h>
void main () {
    int x=5 ,y=8 ,z;
    z=x++ + --y;
    printf("x=%d, y=%d, z=%d \n", x, y, z);
    z=x-- + y++;
    printf("x=%d, y=%d, z=%d \n", x, y, z);
}