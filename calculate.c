#include <stdio.h>

int main()
{
    int num1, num2, sum, product, quotient, difference, remainder;

    printf("Enter first number: ");
    scanf("%d", &num1);
    printf("Enter second number: ");
    scanf("%d", &num2);

    sum = num1 + num2;
    product = num1 * num2;
    quotient = num1 / num2;
    difference = num1 - num2;
    remainder = num1 % num2;

    printf("Sum: %d\n", sum);
    printf("Product: %d\n", product);
    printf("Quotient: %d\n", quotient);
    printf("Difference: %d\n", difference);
    printf("Remainder: %d\n", remainder);

    return 0;
}
