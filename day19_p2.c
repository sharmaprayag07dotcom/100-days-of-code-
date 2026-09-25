/*
 * Q38: Write a program to find the sum of digits of a number.
 * Input: 123  → Output: Sum of digits = 6
 */
#include <stdio.h>
int main() {
    int n, s=0;
    printf("Enter a number: ");
    scanf("%d", &n);
    if(n<0) n=-n;
    while(n) { s+=n%10; n/=10; }
    printf("Sum of digits = %d\n", s);
    return 0;
}
