/*
 * Q50: Print a right-aligned decreasing star pattern.
 * Input: 5  → *****, ****, ***, **, *
 */
#include <stdio.h>
int main() {
    int n, i, j;
    printf("Enter n: ");
    scanf("%d", &n);
    for(i=n;i>=1;i--) {
        for(j=0;j<n-i;j++) printf(" ");
        for(j=0;j<i;j++) printf("*");
        printf("\n");
    }
    return 0;
}
