/*
 * Q35: Write a program to print all factors of a given number.
 * Input: 12  → Output: Factors: 1 2 3 4 6 12
 */
#include <stdio.h>
int main() {
    int n, i;
    printf("Enter a number: ");
    scanf("%d", &n);
    printf("Factors: ");
    for (i=1; i<=n; i++) if(n%i==0) printf("%d ", i);
    printf("\n");
    return 0;
}
