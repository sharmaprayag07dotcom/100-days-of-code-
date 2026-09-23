/*
 * Q34: Write a program to check if a number is prime.
 * Input: 7  → Output: 7 is prime
 */
#include <stdio.h>
#include <math.h>
int main() {
    int n, i, prime=1;
    printf("Enter a number: ");
    scanf("%d", &n);
    if (n<2) prime=0;
    for (i=2; i<=(int)sqrt(n); i++)
        if (n%i==0) { prime=0; break; }
    printf("%d is %sprime\n", n, prime?"":"not ");
    return 0;
}
