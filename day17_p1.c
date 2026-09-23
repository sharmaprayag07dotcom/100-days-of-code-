/*
 * Q33: Write a program to check if a number is an Armstrong number.
 * Input: 153  → Output: 153 is an Armstrong number
 */
#include <stdio.h>
#include <math.h>
int main() {
    int n, orig, d=0, t;
    double sum=0;
    printf("Enter a number: ");
    scanf("%d", &n);
    orig=n; t=n;
    while(t) { d++; t/=10; }
    t=n;
    while(t) { sum+=pow(t%10,d); t/=10; }
    printf("%d is %san Armstrong number\n", orig, (int)sum==orig?"":"not ");
    return 0;
}
