/*
 * Q6: Write a program to swap two numbers using a third variable.
 * Input: 3 5  → Output: After swap: 5 3
 */
#include <stdio.h>
int main() {
    int a, b, t;
    printf("Enter two numbers: ");
    scanf("%d %d", &a, &b);
    t=a; a=b; b=t;
    printf("After swap: %d %d\n", a, b);
    return 0;
}
