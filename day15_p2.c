/*
 * Q30: Write a program to reverse a given number.
 * Input: 12345  → Output: Reversed = 54321
 */
#include <stdio.h>
int main() {
    int n, r=0;
    printf("Enter a number: ");
    scanf("%d", &n);
    while(n!=0) { r=r*10+n%10; n/=10; }
    printf("Reversed = %d\n", r);
    return 0;
}
