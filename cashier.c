#include <stdio.h>

void main() {
    int price, b20, b10, b5, b1;
    printf("Enter the price of the item: ");
    scanf("%d", &price);
    printf("The price of the item is: %d NIS\n", price);
    b20 = price / 20;
    price = price % 20;
    b10 = price / 10;
    price = price % 10;
    b5 = price / 5;
    price = price % 5;
    b1 = price;
    printf("The number of 20 bills is: %d\n", b20);
    printf("The number of 10 bills is: %d\n", b10);
    printf("The number of 5 bills is: %d\n", b5);
    printf("The number of 1 bills is: %d\n", b1);
}