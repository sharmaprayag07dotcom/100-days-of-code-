/*
 * Q51: Print the right-aligned number pattern:
 *      5, _45, __345, ___2345, ____12345
 */
#include <stdio.h>
int main() {
    int n, i, j;
    printf("Enter n: ");
    scanf("%d", &n);
    for(i=n;i>=1;i--) {
        for(j=0;j<i-1;j++) printf(" ");
        for(j=i;j<=n;j++) printf("%d",j);
        printf("\n");
    }
    return 0;
}
