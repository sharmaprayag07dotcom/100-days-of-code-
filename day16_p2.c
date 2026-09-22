/*
 * Q32: Write a program to check if a number is a palindrome.
 * Input: 121  → Output: 121 is a palindrome
 */
#include <stdio.h>
int main() {
    int n, orig, r=0;
    printf("Enter a number: ");
    scanf("%d", &n);
    orig=n;
    while(n!=0) { r=r*10+n%10; n/=10; }
    printf("%d is %sa palindrome\n", orig, orig==r?"":"not ");
    return 0;
}
