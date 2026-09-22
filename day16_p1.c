/*
 * Q31: Write a program to print binary representation of a number.
 * Input: 10  → Output: Binary = 1010
 */
#include <stdio.h>
int main() {
    int n, b[32], i=0, j;
    printf("Enter a number: ");
    scanf("%d", &n);
    if (n==0) { printf("Binary = 0\n"); return 0; }
    while(n>0) { b[i++]=n%2; n/=2; }
    printf("Binary = ");
    for(j=i-1;j>=0;j--) printf("%d",b[j]);
    printf("\n");
    return 0;
}
