/*
 * Q43: Write a program to check if a number is a strong number.
 * Input: 145  → Output: 145 is a strong number
 */
#include <stdio.h>
int fact(int n){ int f=1; while(n>1) f*=n--; return f; }
int main() {
    int n, orig, s=0;
    printf("Enter a number: ");
    scanf("%d", &n);
    orig=n;
    while(n) { s+=fact(n%10); n/=10; }
    printf("%d is %sa strong number\n", orig, s==orig?"":"not ");
    return 0;
}
