/*
 * Q36: Write a program to find the HCF (GCD) of two numbers.
 * Input: 12 18  → Output: HCF = 6
 */
#include <stdio.h>
int main() {
    int a, b, t;
    printf("Enter two numbers: ");
    scanf("%d %d", &a, &b);
    while(b) { t=b; b=a%b; a=t; }
    printf("HCF = %d\n", a);
    return 0;
}
