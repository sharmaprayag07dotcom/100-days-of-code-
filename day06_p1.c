/*
 * Q11: Write a program to check whether a number is even or odd.
 * Input: 7  → Output: 7 is odd
 */
#include <stdio.h>
int main() {
    int n;
    printf("Enter a number: ");
    scanf("%d", &n);
    printf("%d is %s\n", n, n%2==0 ? "even" : "odd");
    return 0;
}
