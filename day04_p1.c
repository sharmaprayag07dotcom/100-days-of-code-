/*
 * Q7: Write a program to swap two numbers without using a third variable.
 * Input: 10 20  → Output: After swap: 20 10
 */
#include <stdio.h>
int main() {
    int a, b;
    printf("Enter two numbers: ");
    scanf("%d %d", &a, &b);
    a=a+b; b=a-b; a=a-b;
    printf("After swap: %d %d\n", a, b);
    return 0;
}
