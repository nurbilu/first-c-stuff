#include <stdio.h>

void main() {
    int miles, yards;
    double kilometers;
    miles = 26;
    yards = 385;
    kilometers = 1.609 * (miles + yards / 1760.0);
    printf("A marathon is %lf kilometers.\n", kilometers);
}
