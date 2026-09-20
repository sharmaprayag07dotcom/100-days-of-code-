/*
 * Q28: Write a program to print the product of even numbers from 1 to n.
 * Input: 6  → Output: Product = 48
 */
#include <stdio.h>
int main() {
    int n, i;
    long long p=1;
    printf("Enter n: ");
    scanf("%d", &n);
    for (i=2; i<=n; i+=2) p*=i;
    printf("Product = %lld\n", p);
    return 0;
}
