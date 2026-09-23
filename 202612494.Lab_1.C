#include <stdio.h>

int main(void) {
    int x, y;

    printf("Enter two integers (x y): ");
    scanf("%d %d", &x, &y);

    int sum = x + y;
    int diff = x - y;
    int product = x * y;
    int quotient = x / y;
    int remainder = x % y;

    printf("%d %d\n", x, y);
    printf("Sum: %d\n", sum);
    printf("Difference: %d\n", diff);
    printf("Product: %d\n", product);
    printf("Quotient: %d\n", quotient);
    printf("Remainer: %d\n", remainder);

    return 0;
}