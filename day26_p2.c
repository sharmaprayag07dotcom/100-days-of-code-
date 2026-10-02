/*
 * Q52: Print a diamond/rhombus star pattern.
 */
#include <stdio.h>
int main() {
    int n, i, j;
    printf("Enter n: ");
    scanf("%d", &n);
    for(i=1;i<=n;i++) {
        for(j=1;j<i;j++) printf(" ");
        for(j=i;j<=n;j++) printf("* ");
        printf("\n");
    }
    for(i=n-1;i>=1;i--) {
        for(j=1;j<i;j++) printf(" ");
        for(j=i;j<=n;j++) printf("* ");
        printf("\n");
    }
    return 0;
}
