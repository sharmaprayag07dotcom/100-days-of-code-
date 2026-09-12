/*
 * Q12: Write a program to check if a number is positive, negative, or zero.
 * Input: -5  → Output: Negative
 */
#include <stdio.h>
int main() {
    int n;
    printf("Enter a number: ");
    scanf("%d", &n);
    if (n>0) printf("Positive\n");
    else if (n<0) printf("Negative\n");
    else printf("Zero\n");
    return 0;
}
