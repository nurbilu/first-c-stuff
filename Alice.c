#include <stdio.h> 
int main() {
    double price;
    int qty;
    printf("Hello, Alice! Welcome to the store.\n");
    printf("Enter price of product: ");
    scanf("%lf", &price);
    printf("Enter quantity of product: ");
    scanf("%d", &qty);

    double discount = 0;
    if (qty >= 50)
        discount = 0.5;
    else if (qty > 25)
        discount = 0.2;
    else if (qty > 10)
        discount = 0.05;

    double total = price * qty * (1 - discount);

    printf("Alice, your total price is: %.2lf\n", total);
    printf("the price per item is after discount: %.2lf\n", price * (1 - discount));
    return 0;
}
