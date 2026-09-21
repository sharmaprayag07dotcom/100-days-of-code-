/*
 * Q29: Write a program to calculate the factorial of a number.
 * Input: 5  → Output: Factorial = 120
 */
#include <stdio.h>
int main() {
    int n, i;
    long long f=1;
    printf("Enter n: ");
    scanf("%d", &n);
    for (i=1; i<=n; i++) f*=i;
    printf("Factorial = %lld\n", f);
    return 0;
}
