#include <stdio.h>

void main() {
    double priceA = 2.0;
    double priceB = 2.5;
    int qtyA = 10;
    int qtyB = 2;

    double totalPaid = priceA * qtyA + priceB * qtyB;
    int totalQty = qtyA + qtyB;
    double averagePrice = totalPaid / totalQty;

    printf("Alice paid in average %.5lf NIS per item\n", averagePrice);
}
