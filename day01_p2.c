/*
 * Q2: Write a program to input two numbers and display their
 *     sum, difference, product, and quotient.
 * Input: 10 2  → Output: Sum=12, Diff=8, Product=20, Quotient=5
 */
#include <stdio.h>
int main() {
    int a, b;
    printf("Enter two numbers: ");
    scanf("%d %d", &a, &b);
    printf("Sum=%d, Diff=%d, Product=%d, Quotient=%d\n",
           a+b, a-b, a*b, a/b);
    return 0;
}
