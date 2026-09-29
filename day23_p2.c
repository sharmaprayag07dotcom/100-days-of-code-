/*
 * Q46: Print a solid square star pattern of size n.
 * Input: 5  → 5x5 block of stars
 */
#include <stdio.h>
int main() {
    int n, i, j;
    printf("Enter n: ");
    scanf("%d", &n);
    for(i=0;i<n;i++) { for(j=0;j<n;j++) printf("*"); printf("\n"); }
    return 0;
}
