/*
 * Q42: Write a program to check if a number is a perfect number.
 * Input: 6  → Output: 6 is a perfect number
 */
#include <stdio.h>
int main() {
    int n, i, s=0;
    printf("Enter a number: ");
    scanf("%d", &n);
    for(i=1;i<n;i++) if(n%i==0) s+=i;
    printf("%d is %sa perfect number\n", n, s==n?"":"not ");
    return 0;
}
